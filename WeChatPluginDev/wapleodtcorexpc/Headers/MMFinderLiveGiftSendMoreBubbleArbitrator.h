//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftGoalView, MMLiveRewardGiftSendingMoreBubbleView, MMLiveRewardGiftSendingMoreButton, NSString;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMFinderLiveGiftSendMoreBubbleArbitrator : NSObject
{
    MMFinderLiveGiftGoalView *_giftGoalView;
    MMLiveRewardGiftSendingMoreButton *_quickSendGiftButton;
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate;
    MMLiveRewardGiftSendingMoreBubbleView *_sendMoreBubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveRewardGiftSendingMoreBubbleView *sendMoreBubbleView; // @synthesize sendMoreBubbleView=_sendMoreBubbleView;
@property(nonatomic) __weak id <MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMLiveRewardGiftSendingMoreButton *quickSendGiftButton; // @synthesize quickSendGiftButton=_quickSendGiftButton;
@property(retain, nonatomic) MMFinderLiveGiftGoalView *giftGoalView; // @synthesize giftGoalView=_giftGoalView;
- (void)delayCallOnSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 delayInterval:(double)arg4 sourceHost:(unsigned long long)arg5;
- (void)onSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onLongPressSendingGiftFinished:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onSendingGiftBatchUpdate:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 fromLongPress:(_Bool)arg4 sourceHost:(unsigned long long)arg5;
- (void)setInterruptedFlag:(_Bool)arg1 targetHost:(unsigned long long)arg2;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (id)initWithSendMoreBubbleView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

