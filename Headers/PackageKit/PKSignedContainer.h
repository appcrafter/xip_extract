//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, PKArchive;

@interface PKSignedContainer : NSObject
{
    PKArchive *_archive;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    BOOL _performsAssessment;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

@property BOOL performsAssessmentIfNeeded; // @synthesize performsAssessmentIfNeeded=_performsAssessment;
@property unsigned long long options; // @synthesize options=_options;
- (void)cancelOperation:(id)arg1;	// IMP=0x000000000007a916
- (id)startUnarchivingAtPath:(id)arg1 notifyOnQueue:(id)arg2 progress:(id)arg3 finish:(id)arg4;	// IMP=0x000000000007a6e3
- (void)_startUnarchivingAtPath:(id)arg1 cancelHandler:(id)arg2 notifyOnQueue:(id)arg3 progress:(id)arg4 finish:(id)arg5;	// IMP=0x0000000000079426
@property(readonly) unsigned long long fileSystemCompressionFormat;
- (BOOL)_assessContainerReturningShouldFlagContents:(char *)arg1;	// IMP=0x0000000000079289
- (BOOL)_assessURL:(id)arg1 withQuarantineFlags:(unsigned int)arg2;	// IMP=0x0000000000079101
- (BOOL)_setAssessment:(BOOL)arg1 ofItemAtPath:(id)arg2;	// IMP=0x0000000000079016
- (void)dealloc;	// IMP=0x0000000000078f8f
- (id)initForReadingFromContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000078cb0
- (id)_initCommon;	// IMP=0x0000000000078c49
- (id)_archive;	// IMP=0x000000000007a998

@end
