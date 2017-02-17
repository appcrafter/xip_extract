//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKProduct.h>

@class NSError, NSString, PKStreamingXARArchive;

@interface PKStreamingProduct : PKProduct
{
    PKProduct *_underlyingProduct;	// 40 = 0x28
    PKStreamingXARArchive *_archive;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    NSString *_path;	// 64 = 0x40
    NSError *_currentError;	// 72 = 0x48
}

+ (BOOL)canInitWithURL:(id)arg1;	// IMP=0x0000000000044bc2
@property(copy) NSError *currentError; // @synthesize currentError=_currentError;
@property unsigned long long state; // @synthesize state=_state;
- (id)_archiveForTrustEvaluation;	// IMP=0x0000000000044d6a
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044cc1
- (id)allPackageReferences;	// IMP=0x0000000000044b85
- (id)resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2 returningUTI:(id *)arg3;	// IMP=0x0000000000044b25
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000044ad4
- (id)stringsDictionary;	// IMP=0x0000000000044a97
- (id)distributionContainer;	// IMP=0x0000000000044a5a
- (id)distribution;	// IMP=0x0000000000044a1d
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;	// IMP=0x00000000000449d1
- (int)trustLevelReturningCertificateChain:(id *)arg1;	// IMP=0x0000000000044985
- (BOOL)evaluateTrustReturningError:(id *)arg1;	// IMP=0x0000000000044941
- (void)setMinimumRequiredTrustLevel:(int)arg1;	// IMP=0x00000000000448f5
- (id)productVersion;	// IMP=0x00000000000448b8
- (id)productIdentifier;	// IMP=0x000000000004487b
- (id)productType;	// IMP=0x000000000004483e
- (id)URL;	// IMP=0x00000000000447d6
- (void)_throwExceptionIfResourceNotLoaded:(id)arg1;	// IMP=0x0000000000044788
- (BOOL)_isProductLoaded;	// IMP=0x000000000004476a
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044637
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044596
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004451a
- (void)_updateCurrentArchiveStateWithError:(id)arg1;	// IMP=0x00000000000444a3
- (void)dealloc;	// IMP=0x000000000004440b
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000044266
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x000000000004423c

@end

