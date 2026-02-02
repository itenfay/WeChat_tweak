//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSArray, NSData, NSDate, NSString;
@protocol WeAvatarLogicDelegate;

@interface WeAvatarLogic : NSObject
{
    _Bool _isReady;
    long long _isRemoteOpen;
    _Bool _isRuntimeError;
    NSString *_handlingSEI;
    MMFinderLiveTaskId *_taskId;
    NSDate *_date;
    NSDate *_requestDate;
    NSArray *_anchor_username_list;
    _Bool _audience_switch;
    NSData *_server_session;
    id <WeAvatarLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WeAvatarLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPollingResponse:(id)arg1;
- (void)notifyOnReadyIfNeeded;
- (id)parsePollingResp:(id)arg1;
- (void)onLiveTask:(id)arg1 receiveSEI:(id)arg2;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4;
- (id)generatePollingRequest;
- (void)markRuntimeError;
- (_Bool)isReady;
- (void)onReceiveSEI:(id)arg1;
- (_Bool)checkAudienceNAnchorIsOpen;
- (void)initABtest;
- (id)initWithTaskId:(id)arg1;
- (id)taskId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

