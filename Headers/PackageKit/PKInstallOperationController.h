//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, PKInstallAnalyzer, PKInstallOperation, PKInstallRequest;

@interface PKInstallOperationController : NSObject
{
    PKInstallRequest *_request;	// 8 = 0x8
    PKInstallAnalyzer *_analyzer;	// 16 = 0x10
    NSMutableArray *_operations;	// 24 = 0x18
    PKInstallOperation *_lastCancellableOp;	// 32 = 0x20
    double _queuedTime;	// 40 = 0x28
    double _dequeuedTime;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_updateQueue;	// 56 = 0x38
    BOOL _isRunning;	// 64 = 0x40
    BOOL _isCancelled;	// 65 = 0x41
    NSError *_error;	// 72 = 0x48
    NSMutableDictionary *_trackingHistory;	// 80 = 0x50
}

+ (BOOL)_verboseMode;	// IMP=0x000000000005a703
@property(retain) NSError *error; // @synthesize error=_error;
- (void)_markEndOfCancellableOperations;	// IMP=0x000000000005a5fd
- (BOOL)_isCancelled;	// IMP=0x000000000005a4c3
- (id)_currentOperation;	// IMP=0x000000000005a2f8
- (void)_enqueueOperation:(id)arg1;	// IMP=0x000000000005a0a9
- (double)totalEstimatedTime;	// IMP=0x000000000005a097
- (id)currentPackageSpecifier;	// IMP=0x000000000005a06c
- (id)currentPackage;	// IMP=0x000000000005a041
- (double)progressPercentage;	// IMP=0x0000000000059f82
- (double)estimatedTimeRemaining;	// IMP=0x0000000000059cc5
- (int)installState;	// IMP=0x0000000000059c86
- (BOOL)cancel;	// IMP=0x00000000000599da
- (BOOL)canCancel;	// IMP=0x00000000000599c2
- (BOOL)run;	// IMP=0x0000000000059608
- (void)addCommitOperationsFromSandbox:(id)arg1 usingManager:(id)arg2;	// IMP=0x0000000000058f73
- (void)addPreLogoutCommitOperationsIntoSandbox:(id)arg1;	// IMP=0x0000000000058f6d
- (void)addStageOperationsIntoSandbox:(id)arg1 inBackground:(BOOL)arg2;	// IMP=0x0000000000058c14
- (void)addPrepareOperationsIntoSandbox:(id)arg1;	// IMP=0x0000000000058b9b
- (id)description;	// IMP=0x0000000000058956
- (void)dealloc;	// IMP=0x0000000000058889
- (id)initWithRequest:(id)arg1 analyzer:(id)arg2;	// IMP=0x0000000000058757

@end

