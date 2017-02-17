//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDirectoryEnumerator.h"

@class NSString;

@interface XARDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __xar_t *_xar;	// 8 = 0x8
    struct __xar_iter_t *_xar_iter;	// 16 = 0x10
    struct __xar_file_t *_current_xar_file;	// 24 = 0x18
    BOOL _didPeek;	// 32 = 0x20
    BOOL _isDone;	// 33 = 0x21
    NSString *_basePath;	// 40 = 0x28
}

- (BOOL)isDirectory;	// IMP=0x000000000000cfaf
- (void)skipDescendents;	// IMP=0x000000000000cf9d
- (void)skipDescendants;	// IMP=0x000000000000ce55
- (id)nextObject;	// IMP=0x000000000000cd59
- (struct __xar_file_t *)_next_file;	// IMP=0x000000000000cce0
- (struct __xar_file_t *)xar_file;	// IMP=0x000000000000cccf
- (void)dealloc;	// IMP=0x000000000000cc58
- (id)initWithXAR:(struct __xar_t *)arg1 subpath:(id)arg2;	// IMP=0x000000000000cb69
- (BOOL)_seekToSubpath:(id)arg1;	// IMP=0x000000000000ca9a

@end

