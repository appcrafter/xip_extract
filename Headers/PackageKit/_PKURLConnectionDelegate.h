//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURLResponse;

@interface _PKURLConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    NSURLResponse *response;	// 8 = 0x8
    NSMutableData *data;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *notifyQueue;	// 24 = 0x18
    CDUnknownBlockType notifyBlock;	// 32 = 0x20
}

@property(retain) NSMutableData *data; // @synthesize data;
@property(retain) NSURLResponse *response; // @synthesize response;
- (BOOL)_wantHTTPLogging;	// IMP=0x000000000004013a
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000003ffc6
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x000000000003fe18
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000000003fde7
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000000003fb60
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;	// IMP=0x000000000003fb5a
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x000000000003fb3e
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;	// IMP=0x000000000003fb33
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x000000000003fa3e
- (void)dealloc;	// IMP=0x000000000003f98e
- (id)initWithNotifyQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f8ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
