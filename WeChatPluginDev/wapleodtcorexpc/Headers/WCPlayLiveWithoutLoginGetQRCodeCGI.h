//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, WCPlayLiveWithoutLoginGetQRCodeDelegate;

@interface WCPlayLiveWithoutLoginGetQRCodeCGI : NSObject
{
    id <WCPlayLiveWithoutLoginGetQRCodeDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workerThreadQueue;
    NSMutableSet *_eventIdDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *eventIdDic; // @synthesize eventIdDic=_eventIdDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerThreadQueue; // @synthesize workerThreadQueue=_workerThreadQueue;
@property(nonatomic) __weak id <WCPlayLiveWithoutLoginGetQRCodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCodeLoginSuccessOnMainThread:(id)arg1 token:(id)arg2;
- (void)onCodeLoginFailOnMainThread;
- (void)handleResponse:(id)arg1 withRequest:(id)arg2 eventID:(unsigned int)arg3;
- (void)removeRequestEventID:(unsigned int)arg1;
- (_Bool)isLatestRequestEventID:(unsigned int)arg1;
- (void)addRequestEventID:(unsigned int)arg1;
- (void)internalStopRequest;
- (void)stopRequest;
- (void)sendRequest;
- (id)init;

@end

