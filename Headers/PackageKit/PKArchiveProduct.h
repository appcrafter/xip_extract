//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKMutableProduct.h>

@class NSMutableDictionary, NSString, PKArchive, PKDistributionContainer;

@interface PKArchiveProduct : PKMutableProduct
{
    PKArchive *_archive;	// 40 = 0x28
    PKDistributionContainer *_container;	// 48 = 0x30
    NSMutableDictionary *_packageIdentifierToURLMap;	// 56 = 0x38
    NSString *_productIdentifier;	// 64 = 0x40
    NSString *_productVersion;	// 72 = 0x48
    NSString *_scriptsPath;	// 80 = 0x50
    NSString *_installerPluginsPath;	// 88 = 0x58
}

+ (BOOL)canInitWithURL:(id)arg1;	// IMP=0x0000000000040aca
- (id)_identifierVersionTuple:(id)arg1;	// IMP=0x0000000000040a4a
- (id)allPackageReferences;	// IMP=0x0000000000040531
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000040514
- (id)stringsDictionary;	// IMP=0x00000000000404f7
- (id)distributionContainer;	// IMP=0x00000000000404e6
- (id)distribution;	// IMP=0x00000000000404c9
- (id)productVersion;	// IMP=0x0000000000040482
- (id)productIdentifier;	// IMP=0x000000000004043b
- (id)productType;	// IMP=0x000000000004042b
- (id)URL;	// IMP=0x00000000000403eb
- (void)dealloc;	// IMP=0x000000000004030f
- (id)_initWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000401db
- (id)_archiveForTrustEvaluation;	// IMP=0x0000000000040c0c
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040bc9
- (BOOL)commitReturningError:(id *)arg1;	// IMP=0x000000000004148f
- (BOOL)_writeCompressedCPIOForRoot:(id)arg1 intoArchivePath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000411e6
- (BOOL)unregisterPackageReference:(id)arg1 deletePackage:(BOOL)arg2;	// IMP=0x00000000000411b3
- (BOOL)registerPackageReference:(id)arg1;	// IMP=0x0000000000041085
- (id)suggestedPackagePathFromPackageReference:(id)arg1;	// IMP=0x0000000000041011
- (BOOL)addResourceDataAtPath:(id)arg1;	// IMP=0x0000000000040ea0
- (void)_setInstallerPluginsPath:(id)arg1;	// IMP=0x0000000000040e54
- (void)_setScriptsPath:(id)arg1;	// IMP=0x0000000000040e08
- (BOOL)setDistributionFromContainer:(id)arg1;	// IMP=0x0000000000040deb
- (BOOL)setDistribution:(id)arg1;	// IMP=0x0000000000040dc8
- (void)setProductIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x0000000000040d3e
- (id)initForWritingToArchive:(id)arg1 signingDelegate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000040c1d

@end

