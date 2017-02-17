//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKSignedContainer.h>

@class NSArray, NSMutableArray;

@interface PKMutableSignedContainer : PKSignedContainer
{
    struct OpaqueSecIdentityRef *_identity;	// 40 = 0x28
    NSArray *_intermediateCertificates;	// 48 = 0x30
    NSMutableArray *_pathsToAdd;	// 56 = 0x38
    BOOL _useTSA;	// 64 = 0x40
    unsigned long long _fileSystemCompressionFormat;	// 72 = 0x48
}

@property BOOL useTSA; // @synthesize useTSA=_useTSA;
- (void)startArchivingAtPath:(id)arg1 notifyOnQueue:(id)arg2 progress:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;	// IMP=0x000000000007baca
- (BOOL)_archiveToPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b12b
- (id)_writeIndexBomToPath:(id)arg1;	// IMP=0x000000000007ac2b
- (BOOL)addFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007ab59
@property unsigned long long fileSystemCompressionFormat;
- (void)dealloc;	// IMP=0x000000000007aa9b
- (id)initForWritingContainerWithIdentity:(struct OpaqueSecIdentityRef *)arg1 supportingCertificates:(id)arg2;	// IMP=0x000000000007a9a9

@end

