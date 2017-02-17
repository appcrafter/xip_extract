//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXMLDocument;

@interface PKPackageInfo : NSObject
{
    NSXMLDocument *_XMLDocument;	// 8 = 0x8
}

+ (id)_bundleIdentifierFromBundleElement:(id)arg1;	// IMP=0x0000000000028583
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000026c7f
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000026c37
- (id)XMLDocument;	// IMP=0x0000000000026c26
- (void)dealloc;	// IMP=0x0000000000026bbf
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000026ba6
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x0000000000026a37
- (id)initWithData:(id)arg1;	// IMP=0x00000000000269d4
- (id)_initWithXMLDocument:(id)arg1;	// IMP=0x00000000000268eb
- (void)_setDontObsoletePathsWithSet:(id)arg1;	// IMP=0x0000000000023728
- (void)_setFileElementTurdsWithComponents:(id)arg1;	// IMP=0x0000000000023028
- (void)_setComponentScriptsWithComponents:(id)arg1;	// IMP=0x0000000000022bac
- (void)_setBundleIdentifiersAsRelocatable:(id)arg1;	// IMP=0x0000000000022b93
- (void)_setBundleIdentifiersForStrict:(id)arg1;	// IMP=0x0000000000022b7a
- (void)_setBundleIdentifiersForAtomicUpdate:(id)arg1;	// IMP=0x0000000000022b61
- (void)_setBundleIdentifiersForUpdate:(id)arg1;	// IMP=0x0000000000022b48
- (void)_setBundleIdentifiersForUpgrade:(id)arg1;	// IMP=0x0000000000022b2f
- (void)_setBundleIdentifiersForVersionChecking:(id)arg1;	// IMP=0x0000000000022b16
- (void)__setBundleIdentifiers:(id)arg1 forDirective:(id)arg2;	// IMP=0x0000000000022920
- (void)_setBundleDefinitionsWithBundleAttributeDictionaries:(id)arg1;	// IMP=0x0000000000022711
- (void)setGroups:(id)arg1;	// IMP=0x0000000000027a44
- (id)groups;	// IMP=0x00000000000278be
- (void)setPostInstallScriptPath:(id)arg1;	// IMP=0x00000000000278ac
- (void)setPostinstallScriptPath:(id)arg1;	// IMP=0x0000000000027865
- (id)postInstallScriptPath;	// IMP=0x0000000000027853
- (id)postinstallScriptPath;	// IMP=0x0000000000027809
- (void)setPreInstallScriptPath:(id)arg1;	// IMP=0x00000000000277f7
- (void)setPreinstallScriptPath:(id)arg1;	// IMP=0x00000000000277b0
- (id)preInstallScriptPath;	// IMP=0x000000000002779e
- (id)preinstallScriptPath;	// IMP=0x0000000000027754
- (id)_lastElementForScriptName:(id)arg1 componentIdentifier:(id)arg2 createIfNeeded:(BOOL)arg3;	// IMP=0x0000000000027611
- (void)setUpdatePayloadSize:(unsigned long long)arg1;	// IMP=0x0000000000027593
- (unsigned long long)updatePayloadSize;	// IMP=0x0000000000027523
- (void)setPayloadFileCount:(unsigned long long)arg1;	// IMP=0x00000000000274a9
- (unsigned long long)payloadFileCount;	// IMP=0x0000000000027449
- (void)setPayloadInstallSize:(unsigned long long)arg1;	// IMP=0x00000000000273cb
- (unsigned long long)payloadInstallSize;	// IMP=0x000000000002735b
- (void)setPayloadExternalRoot:(id)arg1;	// IMP=0x000000000002730c
- (id)payloadExternalRoot;	// IMP=0x00000000000272c7
- (void)setUseHFSPlusCompression:(id)arg1;	// IMP=0x000000000002724d
- (id)useHFSPlusCompression;	// IMP=0x00000000000271e7
- (void)setMinimumSystemVersion:(id)arg1;	// IMP=0x00000000000271af
- (id)minimumSystemVersion;	// IMP=0x0000000000027171
- (void)setGeneratorVersion:(id)arg1;	// IMP=0x0000000000027139
- (id)generatorVersion;	// IMP=0x00000000000270fb
- (void)setRequiresDistributionCheck:(BOOL)arg1;	// IMP=0x00000000000270c5
- (BOOL)requiresDistributionCheck;	// IMP=0x0000000000027087
- (void)setUpdatePackage:(BOOL)arg1;	// IMP=0x0000000000027051
- (BOOL)updatePackage;	// IMP=0x0000000000027013
- (void)setInstallLocation:(id)arg1;	// IMP=0x0000000000026fdb
- (id)installLocation;	// IMP=0x0000000000026f9d
- (void)setRestartAction:(int)arg1;	// IMP=0x0000000000026f38
- (int)restartAction;	// IMP=0x0000000000026e94
- (void)setAuthLevel:(int)arg1;	// IMP=0x0000000000026e3c
- (int)authLevel;	// IMP=0x0000000000026db3
- (void)setVersion:(id)arg1;	// IMP=0x0000000000026d7b
- (id)version;	// IMP=0x0000000000026d3d
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000026d05
- (id)identifier;	// IMP=0x0000000000026cc7
- (void)setPreserveACLs:(BOOL)arg1;	// IMP=0x0000000000027f16
- (BOOL)preserveACLs;	// IMP=0x0000000000027eca
- (void)setPreserveExtAttrs:(BOOL)arg1;	// IMP=0x0000000000027e94
- (BOOL)preserveExtAttrs;	// IMP=0x0000000000027e48
- (void)setContentType:(id)arg1;	// IMP=0x0000000000027e10
- (id)contentType;	// IMP=0x0000000000027dd2
- (void)setShouldVerifyArchiveExplicitly:(BOOL)arg1;	// IMP=0x0000000000027d9c
- (BOOL)shouldVerifyArchiveExplicitly;	// IMP=0x0000000000027d50
- (void)setScriptsInvalidateReceipt:(BOOL)arg1;	// IMP=0x0000000000027d1a
- (BOOL)scriptsInvalidateReceipt;	// IMP=0x0000000000027cce
- (void)setAllowCustomInstallLocation:(BOOL)arg1;	// IMP=0x0000000000027c98
- (BOOL)allowCustomInstallLocation;	// IMP=0x0000000000027c5a
- (void)setOverwritePermissions:(BOOL)arg1;	// IMP=0x0000000000027c24
- (BOOL)overwritePermissions;	// IMP=0x0000000000027be6
- (id)_dontObsoleteXMLElement;	// IMP=0x0000000000028476
- (id)_deferredInstallXMLElement;	// IMP=0x0000000000028442
- (id)_requiredFilesXMLElement;	// IMP=0x000000000002840e
- (id)_patchXMLElement;	// IMP=0x00000000000283da
- (id)_firmwareBundleXMLElements;	// IMP=0x0000000000028393
- (id)_relocateBundleXMLElements;	// IMP=0x0000000000028134
- (id)_strictIdentifierBundleXMLElements;	// IMP=0x00000000000280ed
- (id)_bundleAtomicUpdateBundleXMLElements;	// IMP=0x00000000000280a6
- (id)_bundleUpdateBundleXMLElements;	// IMP=0x000000000002805f
- (id)_bundleUpgradeBundleXMLElements;	// IMP=0x0000000000028018
- (id)_bundleVersionBundleXMLElements;	// IMP=0x0000000000027fd1
- (id)_topLevelBundleXMLElements;	// IMP=0x0000000000027f9f
- (id)_rootElement;	// IMP=0x0000000000027f4c
- (void)_setDeferredInstallScriptPath:(id)arg1;	// IMP=0x0000000000028511
- (id)_deferredInstallScriptPath;	// IMP=0x00000000000284aa
- (id)_firmwareBundlesWithComponentMap:(id)arg1;	// IMP=0x000000000002ab8c
- (id)_identifierToComponentMapWithPackage:(id)arg1;	// IMP=0x000000000002a9b2
- (void)_parseScriptsElementWithComponentMap:(id)arg1;	// IMP=0x000000000002a667
- (void)_parseFileContainerElement:(id)arg1 container:(id)arg2 componentMap:(id)arg3 pathToComponentMap:(id)arg4;	// IMP=0x000000000002a17c
- (id)__bundlePathToExistingComponentMap:(id)arg1;	// IMP=0x0000000000029efb
- (void)__parseFileElement:(id)arg1 container:(id)arg2 component:(id)arg3;	// IMP=0x0000000000029bb7
- (void)_parseRelocateElementsWithComponentMap:(id)arg1;	// IMP=0x00000000000299c1
- (void)_parseBundleDirectiveElementsWithComponentMap:(id)arg1;	// IMP=0x00000000000290c4
- (void)_parseBundleElements:(id)arg1 intoComponentMap:(id)arg2 withPackage:(id)arg3;	// IMP=0x0000000000028d53
- (id)_coalescedBundleElements;	// IMP=0x0000000000028c76
- (id)_coalescedBundleElementsFromElements:(id)arg1 withParentElement:(id)arg2 bundleIdentifierToBundleElementMap:(id)arg3;	// IMP=0x00000000000286a7
- (id)_generatedIdentifierForBundlePath:(id)arg1;	// IMP=0x0000000000028666
- (id)_looseComponentIdentifier;	// IMP=0x0000000000028629
- (id)_bundlePathFromBundleElement:(id)arg1;	// IMP=0x00000000000285d6

@end

