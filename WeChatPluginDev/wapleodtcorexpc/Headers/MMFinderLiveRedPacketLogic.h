//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSArray, NSMutableDictionary, NSString;
@protocol MMFinderLiveRedPacketLogicDelegate;

@interface MMFinderLiveRedPacketLogic : NSObject
{
    _Bool _canSendRedPackets;
    _Bool _canReceiveRedPackets;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveRedPacketLogicDelegate> _delegate;
    NSArray *_bindingRoomContacts;
    NSMutableDictionary *_redPacketDictionary;
    NSMutableDictionary *_redPacketQueueDictionary;
    NSMutableDictionary *_stagingSendInfoDictionary;
}

+ (void)setCurrentLogic:(id)arg1;
+ (id)currentLogic;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stagingSendInfoDictionary; // @synthesize stagingSendInfoDictionary=_stagingSendInfoDictionary;
@property(retain, nonatomic) NSMutableDictionary *redPacketQueueDictionary; // @synthesize redPacketQueueDictionary=_redPacketQueueDictionary;
@property(retain, nonatomic) NSMutableDictionary *redPacketDictionary; // @synthesize redPacketDictionary=_redPacketDictionary;
@property(nonatomic) _Bool canReceiveRedPackets; // @synthesize canReceiveRedPackets=_canReceiveRedPackets;
@property(nonatomic) _Bool canSendRedPackets; // @synthesize canSendRedPackets=_canSendRedPackets;
@property(retain, nonatomic) NSArray *bindingRoomContacts; // @synthesize bindingRoomContacts=_bindingRoomContacts;
@property(nonatomic) __weak id <MMFinderLiveRedPacketLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)OnWCRedEnvelopesLiveStreamReceiveControlLogicReceiveDone:(unsigned long long)arg1 messageWrap:(id)arg2;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)arg1;
- (void)openRedPacketWithMessage:(id)arg1;
- (void)showRedPacketDetailWithCommentItem:(id)arg1;
- (void)openRedPacketWithCommentItem:(id)arg1;
- (void)showRedPacketDetailWithReceiveInfo:(id)arg1;
- (void)openRedPacketWithItem:(id)arg1;
- (_Bool)isViewControllerVisible;
- (void)sendRedPacket;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)arg1 receiveRedPacketInfo:(id)arg2;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)arg1 sendRedPacketInfo:(id)arg2;
- (void)onGetFinderLiveRedPacketsWithTaskId:(id)arg1 redPacketInfos:(id)arg2;
- (void)handleWithReceiveRedPacketInfo:(id)arg1;
- (void)handleWithSendRedPacketInfo:(id)arg1;
- (id)handleWithRedPacketInfo:(id)arg1;
- (id)myUsername;
- (void)appendCommentWithRedPacketReceiveInfo:(id)arg1;
- (void)appendCommentWithRedPacketSendInfo:(id)arg1;
- (void)displayNewRedPacketItem:(id)arg1;
- (void)handleWithNewRedPacketItem:(id)arg1;
- (id)redPacketQueueForSenderMicId:(id)arg1;
- (id)currentLiveTask;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (void)_init;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

