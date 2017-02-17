//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKArchiveSignature : NSObject
{
    struct __SecTrust *_verifyTrustRef;	// 8 = 0x8
}

- (BOOL)_hasSigningCertificate:(struct OpaqueSecCertificateRef *)arg1;	// IMP=0x000000000000aa16
- (id)signatureDataReturningAlgorithm:(id *)arg1;	// IMP=0x000000000000a9e3
- (id)signedDataReturningAlgorithm:(id *)arg1;	// IMP=0x000000000000a9b0
- (id)algorithmType;	// IMP=0x000000000000a97d
- (id)certificateRefs;	// IMP=0x000000000000a94a
- (id)description;	// IMP=0x000000000000a79b
- (void)dealloc;	// IMP=0x000000000000a737
- (struct __SecTrust *)verificationTrustRef;	// IMP=0x000000000000b11b
- (BOOL)verifySignedDataReturningError:(id *)arg1;	// IMP=0x000000000000b044
- (BOOL)verifySignedData;	// IMP=0x000000000000b030
- (BOOL)_verifyCMSWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000ac46
- (BOOL)_verifyLegacyWithSignedData:(id)arg1 signatureData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000aa1e

@end

