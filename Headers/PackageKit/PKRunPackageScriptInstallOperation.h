//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation
{
    NSString *_scriptType;	// 80 = 0x50
    PKPackageSpecifier *_currentPackageSpecifier;	// 88 = 0x58
    unsigned int _original_bootstrap_port;	// 96 = 0x60
    unsigned int _original_security_session_port;	// 100 = 0x64
}

+ (id)_sanitizeEnvironment:(id)arg1;	// IMP=0x000000000005cbae
- (void)main;	// IMP=0x000000000005d9dc
- (BOOL)_shouldSkipScriptForPackageSpecifier:(id)arg1;	// IMP=0x000000000005d886
- (SEL)_scriptPathSelectorForPackage:(id)arg1 returningScriptName:(id *)arg2;	// IMP=0x000000000005d703
- (int)_runPackageScript:(id)arg1 packageSpecifier:(id)arg2 component:(id)arg3 scriptName:(id)arg4 error:(id *)arg5;	// IMP=0x000000000005d30d
- (void)_restoreContext;	// IMP=0x000000000005d29b
- (void)_switchToUserContext;	// IMP=0x000000000005d174
- (id)_scriptTaskEnvironmentForPackage:(id)arg1 destination:(id)arg2 scriptName:(id)arg3;	// IMP=0x000000000005cf33
- (id)messageTracerComment;	// IMP=0x000000000005ca53
- (id)messageTracerDomain;	// IMP=0x000000000005c9bd
- (id)currentPackageSpecifier;	// IMP=0x000000000005c9ac
- (int)installState;	// IMP=0x000000000005c941
- (id)description;	// IMP=0x000000000005c8ce
- (void)dealloc;	// IMP=0x000000000005c82f
- (id)initForScriptType:(id)arg1 request:(id)arg2 sandbox:(id)arg3 analyzer:(id)arg4;	// IMP=0x000000000005c45b

@end

