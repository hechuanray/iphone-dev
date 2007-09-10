/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <vmutils/NSBinaryHeader.h>

@class NSDictionary, NSMachOSymbolTable, NSString, RangeArray;

@interface NSMachOHeader : NSBinaryHeader
{
    struct mach_header *_header;	// 12 = 0xc
    struct mach_header_64 *_header64;	// 16 = 0x10
    unsigned int _vmaddrSlide;	// 20 = 0x14
    NSString *_binaryName;	// 24 = 0x18
    void *_originalPtr;	// 28 = 0x1c
    unsigned int _deallocSize;	// 32 = 0x20
    unsigned long _mtime;	// 36 = 0x24
    int _cpuType;	// 40 = 0x28
    BOOL _mustSwap;	// 44 = 0x2c
    BOOL _is64Bit;	// 45 = 0x2d
    NSMachOSymbolTable *_symbolTable;	// 48 = 0x30
    RangeArray *_symbolRanges;	// 52 = 0x34
    RangeArray *_textSymbolRanges;	// 56 = 0x38
    RangeArray *_dataSymbolRanges;	// 60 = 0x3c
    RangeArray *_libraryRanges;	// 64 = 0x40
    NSString *_bundlePath;	// 68 = 0x44
    NSDictionary *_bundleInfoDict;	// 72 = 0x48
}

+ (int)defaultCpuType;	// IMP=0x3188ccbc
+ (void)flushHeaderCache;	// IMP=0x3188ccb8
+ (void)initialize;	// IMP=0x3188cc48
- (unsigned int)addressOfOneSymbolWithCName:(const char *)fp8;	// IMP=0x3188e4c4
- (unsigned int)addressOfSymbolWithCName:(const char *)fp8;	// IMP=0x3188e420
- (unsigned int)addressOfSymbolWithCName:(const char *)fp8 inLibrary:(const char *)fp12;	// IMP=0x3188e454
- (struct _NSRange)addressRangeOfOneSymbolWithAddress:(unsigned int)fp8;	// IMP=0x3188e5d4
- (struct _NSRange)addressRangeOfSymbolWithAddress:(unsigned int)fp8;	// IMP=0x3188e370
- (struct _NSRange)addressRangeOfSymbolWithCName:(const char *)fp8;	// IMP=0x3188e3c8
- (int)architecture;	// IMP=0x3188d384
- (id)bundleInfoDictionary;	// IMP=0x3188e25c
- (id)bundlePath;	// IMP=0x3188e680
- (const char *)cnameOfSymbolWithAddress:(unsigned int)fp8;	// IMP=0x3188e33c
- (id)dataSymbolRanges;	// IMP=0x3188eaec
- (void)dealloc;	// IMP=0x3188d240
- (void)finalize;	// IMP=0x3188d314
- (BOOL)hasSourceInfo;	// IMP=0x3188e22c
- (BOOL)hasSymbolInfo;	// IMP=0x3188e1fc
- (struct mach_header *)headerFromStart:(void *)fp8;	// IMP=0x3188ce7c
- (id)initFromMemory:(void *)fp8 withCPUType:(int)fp12 withSlide:(unsigned int)fp16 withName:(id)fp20 deallocSize:(unsigned long)fp24;	// IMP=0x3188ceb4
- (id)initWithPath:(id)fp8 withCPUType:(int)fp12 withSlide:(unsigned int)fp16;	// IMP=0x3188d024
- (id)initWithPath:(id)fp8 withSlide:(unsigned int)fp12;	// IMP=0x3188d208
- (BOOL)is64Bit;	// IMP=0x3188d394
- (BOOL)isExecutable;	// IMP=0x3188e13c
- (id)libraryRanges;	// IMP=0x3188f114
- (struct load_command *)loadCommand:(unsigned long)fp8;	// IMP=0x3188dcf8
- (struct section_64 *)loadCommandForNthSection64:(int)fp8;	// IMP=0x3188dae8
- (struct section *)loadCommandForNthSection:(int)fp8;	// IMP=0x3188da04
- (struct section_64 *)loadCommandForSectionNamed64:(id)fp8 inSegmentNamed:(id)fp12;	// IMP=0x3188d950
- (struct section *)loadCommandForSectionNamed:(id)fp8 inSegmentNamed:(id)fp12;	// IMP=0x3188d89c
- (struct segment_command_64 *)loadCommandForSegmentNamed64:(id)fp8;	// IMP=0x3188d660
- (struct segment_command *)loadCommandForSegmentNamed:(id)fp8;	// IMP=0x3188d570
- (struct mach_header *)machHeader;	// IMP=0x3188d3a4
- (struct mach_header_64 *)machHeader64;	// IMP=0x3188d3ac
- (BOOL)mustSwap;	// IMP=0x3188d38c
- (id)name;	// IMP=0x3188d37c
- (struct load_command *)nth:(int)fp8 loadCommand:(unsigned long)fp12;	// IMP=0x3188df90
- (struct section_64 *)nthSection64:(int)fp8 inSegmentNamed:(id)fp12;	// IMP=0x3188d7b4
- (struct section *)nthSection:(int)fp8 inSegmentNamed:(id)fp12;	// IMP=0x3188d750
- (int)numberLoadCommands:(unsigned long)fp8;	// IMP=0x3188de58
- (int)numberOfSectionsInSegmentNamed:(id)fp8;	// IMP=0x3188d818
- (int)numberSegments;	// IMP=0x3188e0d8
- (id)segmentNameForNthSection64:(int)fp8;	// IMP=0x3188dc14
- (id)segmentNameForNthSection:(int)fp8;	// IMP=0x3188dbcc
- (unsigned int)slideValue;	// IMP=0x3188d39c
- (struct stabInfo *)sourceLocationOfAddress:(unsigned int)fp8;	// IMP=0x3188e548
- (struct _NSRange)sourceRangeForAddress:(unsigned int)fp8;	// IMP=0x3188e57c
- (id)symbolRanges;	// IMP=0x3188dc5c
- (id)symbolTable;	// IMP=0x3188e1ac
- (id)textSymbolRanges;	// IMP=0x3188e844
- (char *)uuid;	// IMP=0x3188d3b4
- (id)uuidString;	// IMP=0x3188d4e8

@end

