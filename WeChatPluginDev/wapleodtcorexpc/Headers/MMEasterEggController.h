//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMEasterEggActivityChatReportObject, MMEasterEggEffect, MMEasterEggMatch, NSMutableArray, NSString;
@protocol MMEasterEggActivity, MMEasterEggControllerDelegate;

@interface MMEasterEggController
{
    id <MMEasterEggControllerDelegate> _delegate;
    NSString *_chatUsername;
    NSString *_sessionId;
    MMEasterEggMatch *_eggMatch;
    MMEasterEggEffect *_effect;
    id <MMEasterEggActivity> _activity;
    MMEasterEggActivityChatReportObject *_reportObject;
    NSMutableArray *_pendingMsgs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingMsgs; // @synthesize pendingMsgs=_pendingMsgs;
@property(retain, nonatomic) MMEasterEggActivityChatReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) id <MMEasterEggActivity> activity; // @synthesize activity=_activity;
@property(retain, nonatomic) MMEasterEggEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) MMEasterEggMatch *eggMatch; // @synthesize eggMatch=_eggMatch;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;
@property(nonatomic) __weak id <MMEasterEggControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getExtInfo;
- (long long)getEffectType;
- (id)getViewController;
- (void)showInteractiveUIWithReportString:(id)arg1;
- (struct CGRect)getViewBoundsForAnimationType:(long long)arg1;
- (void)onEffectEnd;
- (void)onTapInteractiveUI;
- (double)getEffectParentViewTopInset;
- (id)getEffectParentView;
@property(readonly, copy) NSString *description;
- (_Bool)privateStartEasterEggWithMessage:(id)arg1 isSender:(_Bool)arg2;
- (void)stopEasterEggWithReason:(unsigned int)arg1;
- (void)stopEasterEgg;
- (void)reset;
- (void)tryResumeCheckEasterEgg;
- (_Bool)canMessageTypeShowEgg:(id)arg1;
- (void)startEasterEggWithMessage:(id)arg1;
- (void)startEasterEggWithBatchMessages:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

