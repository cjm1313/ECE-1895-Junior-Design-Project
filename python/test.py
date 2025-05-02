#!/usr/bin/env python
# coding: utf-8

# In[14]:


from pynq import Overlay, allocate
import numpy as np

overlay = Overlay("aes_bd.bit")
dma = overlay.axi_dma_0
aes_ip = overlay.aes_encrypt_top_0

# Set AES Key via AXI-Lite
key = [
    0x2b, 0x7e, 0x15, 0x16,
    0x28, 0xae, 0xd2, 0xa6,
    0xab, 0xf7, 0x15, 0x88,
    0x09, 0xcf, 0x4f, 0x3c
]

for i in range(4):  # 4 32-bit words for the key (16 bytes)
    aes_ip.write(i * 4, int.from_bytes(key[i*4:(i+1)*4], 'little'))  # Write 32 bits at a time


plaintext = [
    0x32, 0x43, 0xf6, 0xa8,
    0x88, 0x5a, 0x30, 0x8d,
    0x31, 0x31, 0x98, 0xa2,
    0xe0, 0x37, 0x07, 0x34
]

# Allocate DMA buffers
input_buffer = allocate(shape=(16,), dtype=np.uint8)
output_buffer = allocate(shape=(16,), dtype=np.uint8)

input_address = id(input_buffer)
output_address = id(output_buffer)


# Copy input
for i in range(16):
    input_buffer[i] = plaintext[i]

# Perform DMA transfer
dma.sendchannel.transfer(input_buffer)
dma.recvchannel.transfer(output_buffer)
dma.sendchannel.wait()
dma.recvchannel.wait()

# Output and verify
ciphertext = bytes(output_buffer)
expected = bytes([
    0x39, 0x25, 0x84, 0x1d,
    0x02, 0xdc, 0x09, 0xfb,
    0xdc, 0x11, 0x85, 0x97,
    0x19, 0x6a, 0x0b, 0x32
])
print("Output Ciphertext:")
for b in ciphertext:
    print(f"{b:02x}", end=" ")
print()

if ciphertext == expected:
    print("✅ Test Passed")
else:
    print("❌ Test Failed")
    print("Expected:")
    for b in expected:
        print(f"{b:02x}", end=" ")
    print()


# In[ ]:





# In[ ]:




