//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation
{
    PKInstallTask *_currentTask;	// 80 = 0x50
    BOOL _inSandbox;	// 88 = 0x58
}

+ (BOOL)canBackgroundForCurrentSystemState;	// IMP=0x000000000006127e
- (void)cancel;	// IMP=0x00000000000611fb
- (void)main;	// IMP=0x0000000000061168
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)arg1;	// IMP=0x0000000000060ef4
- (id)_pathForTool:(id)arg1;	// IMP=0x0000000000060e23
- (int)installState;	// IMP=0x0000000000060e18
- (BOOL)_shouldUpdateDYLDSharedCache;	// IMP=0x0000000000060d2a
- (id)description;	// IMP=0x0000000000060ca5
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 updateInSandbox:(BOOL)arg4;	// IMP=0x0000000000060bd9

@end

