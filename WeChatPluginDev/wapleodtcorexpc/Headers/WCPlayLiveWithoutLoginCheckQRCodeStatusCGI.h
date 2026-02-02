//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate;

@interface WCPlayLiveWithoutLoginCheckQRCodeStatusCGI : NSObject
{
    id <WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate> _delegate;
    NSString *_token;
    NSObject<OS_dispatch_queue> *_workerThreadQueue;
    NSMutableSet *_eventIdDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *eventIdDic; // @synthesize eventIdDic=_eventIdDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerThreadQueue; // @synthesize workerThreadQueue=_workerThreadQueue;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) __weak id <WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCodeLoginSuccessOnMainThread:(double)arg1 liveContact:(id)arg2 liveInfo:(id)arg3;
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

