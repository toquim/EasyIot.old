#include <Arduino.h>
unsigned char styles_min_css[] PROGMEM = {
  0x1f, 0x8b, 0x08, 0x08, 0x8a, 0x2d, 0x35, 0x65, 0x00, 0x03, 0x73, 0x74,
  0x79, 0x6c, 0x65, 0x73, 0x2e, 0x6d, 0x69, 0x6e, 0x2e, 0x63, 0x73, 0x73,
  0x00, 0xad, 0x58, 0xcb, 0x6e, 0xe3, 0x36, 0x14, 0xdd, 0xf7, 0x2b, 0xd4,
  0x04, 0x03, 0x4c, 0x5a, 0xcb, 0x90, 0x1d, 0xc9, 0xc9, 0x48, 0xe8, 0x00,
  0xdd, 0x0c, 0xba, 0x6a, 0xb7, 0x2d, 0x8a, 0x59, 0x50, 0x12, 0x65, 0xb3,
  0xa1, 0x45, 0x81, 0xa4, 0x62, 0x7b, 0x04, 0xff, 0x7b, 0x2f, 0x5f, 0x12,
  0xf5, 0x70, 0x9a, 0x01, 0x8a, 0x20, 0x09, 0xcd, 0xc7, 0xe5, 0x7d, 0x9e,
  0x73, 0xe9, 0x9c, 0x95, 0x97, 0xae, 0x62, 0xb5, 0x0c, 0x4f, 0x98, 0xec,
  0x0f, 0x32, 0x8d, 0xa3, 0x28, 0xd3, 0x9f, 0x2b, 0x74, 0x24, 0xf4, 0x92,
  0xde, 0xfd, 0x86, 0xe9, 0x2b, 0x96, 0xa4, 0x40, 0xc1, 0xef, 0xb8, 0xc5,
  0x77, 0xab, 0xfe, 0xf3, 0xea, 0x57, 0x4e, 0x10, 0x5d, 0x09, 0x54, 0x8b,
  0x50, 0x60, 0x4e, 0x2a, 0x73, 0x4e, 0x90, 0x6f, 0x38, 0xdd, 0xc4, 0xcd,
  0x39, 0x2b, 0x18, 0x65, 0x3c, 0xbd, 0x2f, 0x8a, 0x22, 0xcb, 0x51, 0xf1,
  0xb2, 0xe7, 0xac, 0xad, 0xcb, 0xf4, 0x7e, 0xbb, 0xdd, 0x66, 0x47, 0xc4,
  0xf7, 0xa4, 0x4e, 0xa3, 0xeb, 0x9a, 0xd5, 0x94, 0xd4, 0xb8, 0x1b, 0x36,
  0x84, 0xe6, 0x58, 0xc5, 0x38, 0x16, 0x72, 0xcf, 0x31, 0xae, 0x83, 0x1f,
  0xc9, 0xb1, 0x61, 0x5c, 0xa2, 0x5a, 0x66, 0x6f, 0x2d, 0x5e, 0xd7, 0x14,
  0x97, 0xdd, 0xc1, 0xd8, 0xb1, 0xd9, 0x82, 0x06, 0x27, 0x52, 0xca, 0x83,
  0x19, 0xe6, 0x8c, 0x97, 0x98, 0xa7, 0x1b, 0x35, 0x9c, 0xde, 0x75, 0x5f,
  0x25, 0x49, 0xa6, 0xd4, 0x08, 0xdd, 0xe1, 0xfe, 0x40, 0xc8, 0x51, 0x49,
  0x5a, 0x91, 0x6e, 0x22, 0x98, 0x32, 0x5a, 0x87, 0x92, 0x35, 0x29, 0x88,
  0xbc, 0xae, 0x6b, 0xf4, 0x9a, 0x23, 0xde, 0x95, 0x44, 0x34, 0x14, 0x5d,
  0xd2, 0x8a, 0xe2, 0x73, 0xf6, 0x4f, 0x2b, 0x24, 0xa9, 0x2e, 0x20, 0xb9,
  0x96, 0xb8, 0x96, 0xa9, 0x68, 0x50, 0x81, 0xc3, 0x1c, 0xcb, 0x13, 0x28,
  0xbb, 0x70, 0x75, 0x1c, 0x95, 0xd5, 0xf3, 0x2e, 0x6b, 0x98, 0x20, 0x92,
  0xb0, 0x3a, 0xad, 0xc8, 0x19, 0x97, 0x4e, 0xf1, 0x28, 0xfa, 0x90, 0x7d,
  0x0b, 0x49, 0x5d, 0xe2, 0x73, 0xfa, 0xe9, 0xd3, 0x27, 0xe5, 0x2d, 0x56,
  0x71, 0x1c, 0x1e, 0x71, 0xdd, 0x3a, 0x43, 0xe3, 0xdd, 0x60, 0x28, 0xec,
  0xbf, 0xae, 0x2b, 0x8c, 0x64, 0x0b, 0xfe, 0x19, 0xeb, 0xa5, 0xfe, 0x84,
  0x25, 0xe1, 0xb8, 0xd0, 0xd7, 0x70, 0x76, 0x32, 0x53, 0x27, 0x8e, 0x9a,
  0x54, 0xfd, 0xc9, 0xf6, 0x30, 0x50, 0x66, 0xf6, 0x12, 0x42, 0x02, 0x46,
  0x84, 0xac, 0xaa, 0xba, 0x8a, 0x50, 0x0a, 0x5e, 0xaa, 0x2a, 0x7b, 0xd1,
  0xa3, 0xf2, 0x86, 0xbd, 0x5f, 0x8f, 0x2b, 0xca, 0x90, 0x4c, 0x29, 0xae,
  0xe4, 0xf4, 0x74, 0xdd, 0x1f, 0xce, 0xab, 0xcd, 0xad, 0xf3, 0xc3, 0xa1,
  0x1a, 0x1d, 0x71, 0x67, 0x5c, 0x73, 0x3a, 0x10, 0x89, 0x47, 0x61, 0x89,
  0xbd, 0x20, 0xa8, 0xbb, 0x4c, 0x54, 0x86, 0xbb, 0xad, 0xf4, 0xed, 0xd3,
  0x48, 0x64, 0xce, 0xce, 0xf3, 0xf4, 0xba, 0x7f, 0x7c, 0x7c, 0xb4, 0xdb,
  0x21, 0xe3, 0x97, 0xc3, 0x6d, 0xa7, 0x5c, 0xa0, 0x9e, 0xe2, 0x5d, 0xbc,
  0x73, 0x93, 0x42, 0x5e, 0x28, 0x4e, 0x05, 0xa3, 0xa4, 0x74, 0x53, 0x36,
  0x06, 0x70, 0x70, 0xe4, 0xf8, 0x06, 0x95, 0x25, 0xa9, 0xf7, 0x26, 0x0b,
  0x6d, 0xde, 0x5b, 0xbd, 0xa7, 0x11, 0xb9, 0xae, 0x5f, 0x31, 0x57, 0xa5,
  0x45, 0xc3, 0x02, 0x72, 0x07, 0xf3, 0xce, 0xd5, 0xc9, 0x90, 0x1f, 0x28,
  0x87, 0x4b, 0x5b, 0x70, 0x8c, 0xca, 0xc2, 0x04, 0xf2, 0x23, 0x3c, 0x8a,
  0x50, 0x72, 0x28, 0x42, 0x28, 0x8a, 0x63, 0xaa, 0x47, 0x14, 0x49, 0xfc,
  0xd7, 0xc7, 0x10, 0x56, 0x1f, 0xb2, 0xdb, 0x4b, 0xa3, 0x6c, 0xfa, 0x4c,
  0xc9, 0x67, 0xd4, 0x59, 0x4b, 0xb4, 0x6f, 0x1f, 0x9b, 0x73, 0xa0, 0xed,
  0x0b, 0xf4, 0xc1, 0x06, 0x71, 0xdc, 0xd7, 0x9f, 0x4e, 0x05, 0x3f, 0xff,
  0x24, 0x3e, 0xcb, 0xb0, 0xc4, 0x05, 0xe3, 0x48, 0x6b, 0x59, 0xb3, 0x1a,
  0x4f, 0xe5, 0xaf, 0x11, 0x18, 0xfa, 0x8a, 0x3f, 0xa3, 0xd5, 0x74, 0x41,
  0xfd, 0x0f, 0x59, 0x83, 0xeb, 0xf9, 0x5a, 0x7a, 0x60, 0xe0, 0x13, 0x50,
  0xcd, 0xbb, 0xd8, 0x6a, 0x99, 0x33, 0x29, 0xd9, 0x31, 0x8d, 0x7b, 0x3d,
  0x75, 0x4c, 0x97, 0x35, 0x11, 0x12, 0x49, 0x11, 0x36, 0xa8, 0xc6, 0x74,
  0x5c, 0x16, 0x88, 0x92, 0x7d, 0x1d, 0x42, 0xa2, 0x1d, 0x45, 0x6a, 0x7c,
  0xee, 0xd7, 0x9e, 0x2b, 0x89, 0xa5, 0xea, 0x99, 0x54, 0xac, 0x87, 0x0d,
  0x71, 0xb2, 0x08, 0x32, 0x4a, 0xbb, 0xa5, 0x62, 0xae, 0x18, 0x53, 0xa1,
  0x9e, 0x42, 0x64, 0x9f, 0x37, 0xc9, 0x00, 0xa5, 0x9e, 0xf5, 0xea, 0xa2,
  0xcd, 0x60, 0x7a, 0xb9, 0x2d, 0x77, 0x25, 0x18, 0x6a, 0x61, 0xa7, 0x3b,
  0x82, 0x2e, 0x36, 0x40, 0xdb, 0x44, 0x59, 0x30, 0x12, 0x67, 0x95, 0xe5,
  0x7a, 0x1d, 0xb5, 0x92, 0x8d, 0xaa, 0x4a, 0x4f, 0xd8, 0xfd, 0xfa, 0x9e,
  0x67, 0x5d, 0x4f, 0x3e, 0xf6, 0x50, 0x22, 0xa4, 0xad, 0x01, 0xe5, 0xe0,
  0x6c, 0xc8, 0x53, 0x7b, 0x4d, 0x34, 0x8d, 0x7e, 0x37, 0xdf, 0xd2, 0xd7,
  0x09, 0xd1, 0x1c, 0x10, 0xe6, 0x94, 0x15, 0x2f, 0x0b, 0x59, 0xe9, 0xab,
  0xa2, 0xab, 0xc8, 0x4d, 0x0c, 0x18, 0xe0, 0x66, 0x8c, 0x45, 0x7a, 0xca,
  0x09, 0xb7, 0x52, 0x15, 0x0a, 0x78, 0x31, 0x32, 0x40, 0x07, 0x93, 0xe0,
  0x25, 0x04, 0xfe, 0xec, 0x3c, 0xb2, 0x9a, 0x9f, 0x74, 0x31, 0xea, 0xf3,
  0xe1, 0x2d, 0x68, 0x05, 0x49, 0xed, 0x11, 0x9c, 0x8b, 0x21, 0x71, 0x05,
  0x1e, 0x1c, 0xff, 0xec, 0x6e, 0xcc, 0x15, 0xe7, 0xf6, 0xd3, 0xff, 0x25,
  0x4e, 0xe5, 0x9a, 0xba, 0x77, 0xdb, 0xe7, 0x61, 0x0f, 0xd9, 0x90, 0xd7,
  0x17, 0x01, 0xa9, 0xeb, 0xd4, 0x1b, 0x89, 0x19, 0x9f, 0x19, 0xc9, 0x9b,
  0xeb, 0xa6, 0xe8, 0xec, 0xa7, 0x55, 0x8a, 0x2a, 0x10, 0xb3, 0x4a, 0x73,
  0xac, 0x08, 0x76, 0x45, 0xea, 0xa6, 0x95, 0x7f, 0xcb, 0x4b, 0x83, 0x7f,
  0x29, 0x0e, 0xb8, 0x78, 0x01, 0xdd, 0xbf, 0xfa, 0x93, 0x0a, 0x2b, 0xd9,
  0xd7, 0x0e, 0x3a, 0x87, 0xfc, 0x85, 0x48, 0x85, 0xb3, 0x8a, 0xfc, 0x95,
  0xbc, 0xbe, 0x42, 0xcf, 0x00, 0x4f, 0xec, 0xdb, 0xf2, 0xd2, 0xb5, 0x22,
  0x98, 0x96, 0x02, 0xcb, 0x6e, 0xc8, 0x08, 0xcb, 0xd2, 0x51, 0xa6, 0xf2,
  0xd7, 0x14, 0x62, 0xe4, 0x35, 0x0b, 0x0a, 0xc7, 0x34, 0xb3, 0x72, 0x46,
  0xbb, 0x49, 0xb7, 0x31, 0xe2, 0xef, 0x75, 0xbc, 0x7d, 0x4e, 0x9e, 0x36,
  0xf1, 0xe3, 0x72, 0x13, 0xe2, 0x97, 0xe4, 0x28, 0xda, 0x7e, 0xf1, 0xfb,
  0xa4, 0xe3, 0x34, 0x04, 0xac, 0x0b, 0xfc, 0x76, 0x22, 0x72, 0xf5, 0xa7,
  0xe5, 0x8f, 0x70, 0xc9, 0x2b, 0x4e, 0xb5, 0xe8, 0xe5, 0x1e, 0x24, 0x42,
  0x36, 0x72, 0xda, 0x01, 0x95, 0xec, 0x04, 0x55, 0x00, 0xbe, 0x08, 0xa2,
  0x40, 0x1d, 0x54, 0xbf, 0x7c, 0x9f, 0xa3, 0x8f, 0xd1, 0x4a, 0xfd, 0xac,
  0xa3, 0xa7, 0xe4, 0x21, 0xfb, 0x9e, 0xbd, 0x4e, 0xbe, 0xc6, 0x6e, 0x83,
  0x53, 0x3e, 0x9d, 0x05, 0xeb, 0x4d, 0x22, 0x02, 0x8c, 0x04, 0xd0, 0x34,
  0x90, 0x74, 0x2b, 0x57, 0x73, 0x85, 0x66, 0x7b, 0xb2, 0x90, 0xbd, 0x5f,
  0xde, 0x5b, 0x72, 0xfe, 0x0f, 0x21, 0x00, 0x75, 0x07, 0xd2, 0xdc, 0x20,
  0x76, 0xbf, 0x81, 0x70, 0x28, 0xe8, 0x01, 0x87, 0xea, 0xde, 0x02, 0x55,
  0x78, 0x81, 0x1b, 0x4c, 0xe8, 0x3f, 0xd1, 0xa5, 0x2a, 0xeb, 0xee, 0x46,
  0xdc, 0xfb, 0x36, 0x41, 0x71, 0xdf, 0x24, 0x0f, 0xa7, 0xcd, 0xb4, 0x26,
  0x24, 0x4d, 0x33, 0x8e, 0x60, 0x8a, 0x96, 0x0b, 0x50, 0xaf, 0x61, 0xc4,
  0xf0, 0x8d, 0x52, 0x33, 0xd4, 0x7d, 0x22, 0x80, 0xa9, 0x6e, 0xc5, 0x34,
  0xa7, 0xb3, 0xb6, 0x38, 0x84, 0xc8, 0x14, 0xed, 0x11, 0xd5, 0xa4, 0x69,
  0xa9, 0xa6, 0xb4, 0xec, 0xf6, 0x8a, 0x0b, 0x62, 0x2b, 0x54, 0x8b, 0x82,
  0x29, 0x94, 0xbc, 0xc1, 0x67, 0x5d, 0x85, 0x0b, 0xb3, 0x62, 0x3e, 0x39,
  0x9b, 0x18, 0x3a, 0xe7, 0x79, 0x3f, 0xa0, 0xbd, 0x64, 0x38, 0xba, 0x63,
  0x60, 0x01, 0x91, 0x17, 0x60, 0x8b, 0x0f, 0x7a, 0x3a, 0x6c, 0x38, 0x81,
  0xac, 0xbf, 0x8c, 0xa8, 0x7b, 0x16, 0xae, 0x0d, 0xb4, 0x55, 0xdb, 0x62,
  0xd2, 0x6b, 0x6d, 0x77, 0xea, 0xe7, 0xda, 0xb3, 0xbe, 0xdd, 0xb4, 0xcc,
  0xed, 0x7f, 0xfc, 0xbe, 0x90, 0x05, 0xa6, 0xad, 0x86, 0xc5, 0x2f, 0x5f,
  0x16, 0x56, 0x8d, 0x3c, 0xa3, 0xe5, 0x09, 0xf1, 0x1a, 0x42, 0xfc, 0xb6,
  0x96, 0xd0, 0xbd, 0x3e, 0xc5, 0xf9, 0x44, 0x4b, 0x33, 0x69, 0xa4, 0x94,
  0xa8, 0xde, 0x0f, 0x2c, 0x72, 0x43, 0x08, 0xbc, 0x32, 0x26, 0x12, 0x92,
  0x44, 0x1d, 0xa7, 0xa1, 0x40, 0xaf, 0x18, 0x92, 0x84, 0x76, 0xee, 0xc5,
  0x32, 0x74, 0xba, 0x1a, 0x2e, 0x46, 0x84, 0xad, 0xb2, 0x0e, 0xa0, 0xff,
  0x44, 0x64, 0x71, 0xe8, 0xfa, 0x36, 0x84, 0x63, 0x95, 0x04, 0xaf, 0x78,
  0x91, 0x55, 0x2d, 0xae, 0xed, 0xfc, 0xbe, 0x3b, 0x1e, 0xa4, 0x04, 0x1a,
  0xd5, 0xfb, 0x08, 0x46, 0x99, 0x83, 0x5e, 0xbb, 0x17, 0xa0, 0x57, 0x40,
  0xe4, 0xc1, 0xc0, 0x79, 0x1f, 0x3a, 0xc9, 0x66, 0x05, 0x70, 0x51, 0xa6,
  0x99, 0x39, 0xca, 0x8c, 0xbe, 0x0a, 0xd6, 0x35, 0x24, 0x46, 0x0b, 0x4e,
  0x51, 0xd8, 0xb8, 0x00, 0x56, 0xeb, 0x58, 0x64, 0xe3, 0x8f, 0x4e, 0x05,
  0xcb, 0x4e, 0x4b, 0x9a, 0xd8, 0x27, 0xd7, 0xdd, 0x5d, 0x5f, 0xf4, 0xc3,
  0xdb, 0x48, 0x0f, 0xb5, 0x5a, 0xb1, 0x2e, 0x63, 0xd7, 0x3b, 0xce, 0x55,
  0x32, 0xb0, 0xf1, 0x3e, 0x9d, 0xb4, 0xdf, 0x52, 0xcd, 0x8e, 0xb8, 0xfc,
  0xd9, 0x39, 0xe9, 0x66, 0x3a, 0x9a, 0xed, 0x15, 0x2b, 0x5a, 0x31, 0x6c,
  0x1e, 0x50, 0x3d, 0xb2, 0x88, 0x3e, 0xde, 0x3e, 0x91, 0xee, 0xec, 0x1f,
  0x29, 0x38, 0x6e, 0xf0, 0xff, 0xfc, 0xa8, 0xac, 0x7d, 0xb8, 0xf5, 0x34,
  0x70, 0xcb, 0xb7, 0x97, 0x9c, 0xaf, 0xd7, 0xda, 0x88, 0x6e, 0x0c, 0x7a,
  0x36, 0x71, 0xbc, 0x0d, 0x4e, 0xa5, 0x09, 0x88, 0x2a, 0x1c, 0x38, 0xb2,
  0x12, 0x0d, 0x2d, 0xb7, 0xc6, 0x93, 0x49, 0xe3, 0xec, 0x5a, 0x62, 0xe0,
  0xdc, 0x3e, 0x6f, 0x4c, 0x12, 0xcd, 0xb9, 0x58, 0x8f, 0x15, 0xd8, 0xc0,
  0x9b, 0xef, 0x64, 0xfa, 0xd4, 0xb9, 0xaf, 0x95, 0x9c, 0xd9, 0xac, 0x47,
  0x90, 0xd1, 0x3a, 0x7e, 0xb0, 0x8a, 0xb9, 0x57, 0xfa, 0x0d, 0x1a, 0xb1,
  0x05, 0xa8, 0x5e, 0xa8, 0x81, 0xbe, 0xcc, 0x4f, 0x90, 0x19, 0x2c, 0x4e,
  0x5e, 0x88, 0xfe, 0x4b, 0xd2, 0x3e, 0x34, 0x4d, 0xd3, 0x69, 0x6e, 0xb6,
  0x6d, 0xe7, 0x7b, 0x3a, 0xbf, 0xcd, 0xd2, 0xb3, 0xd7, 0xc9, 0x51, 0xf1,
  0xeb, 0x16, 0x1f, 0x9c, 0xb1, 0x23, 0x39, 0x37, 0x58, 0x6e, 0x54, 0x7d,
  0x41, 0x21, 0x5c, 0xf9, 0x5e, 0x61, 0x6f, 0xf4, 0x97, 0x83, 0xc8, 0x79,
  0x5b, 0xfa, 0xae, 0xde, 0x7d, 0xc1, 0x11, 0x6f, 0x7f, 0xaf, 0x32, 0xe9,
  0xec, 0xfd, 0x47, 0x92, 0x8e, 0x96, 0x0d, 0xd1, 0x66, 0x80, 0xbf, 0x58,
  0xfb, 0xb0, 0xa0, 0x4c, 0x8c, 0xbf, 0x6f, 0xf0, 0xbe, 0x4d, 0x18, 0x83,
  0x6e, 0x32, 0xa2, 0xfa, 0xed, 0xf3, 0xa4, 0xe5, 0x4c, 0x06, 0x79, 0x86,
  0x0f, 0x57, 0xf6, 0x83, 0xae, 0xf6, 0x6e, 0x84, 0x03, 0x8b, 0x44, 0x36,
  0x01, 0xd2, 0xeb, 0xfa, 0x00, 0x05, 0x36, 0xaa, 0x1c, 0xcb, 0x34, 0x40,
  0xcd, 0x72, 0xe1, 0x0b, 0x33, 0xff, 0x95, 0xde, 0xb7, 0xd1, 0x1e, 0xf3,
  0x4c, 0xc5, 0x2b, 0x59, 0x6d, 0x53, 0xa2, 0xef, 0x95, 0x65, 0x4d, 0x98,
  0x88, 0xfb, 0xe1, 0x5f, 0x17, 0xfb, 0xd0, 0x85, 0x49, 0x14, 0x00, 0x00
};
unsigned int styles_min_css_len = 1632;
