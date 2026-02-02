//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdCommonInteractionInfo, WCAdCommonInteractionView, WCAdInteractionDeviceMotionContainer;
@protocol WCAdCommonInteractionLogicDelegate;

@interface WCAdCommonInteractionLogic
{
    WCAdCommonInteractionView *_interactionView;
    id <WCAdCommonInteractionLogicDelegate> _delegate;
    WCAdCommonInteractionInfo *_interactionInfo;
    WCAdInteractionDeviceMotionContainer *_deviceMotionContainer;
    long long _interactionState;
}

+ (id)getCommonInteractionLogicWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long interactionState; // @synthesize interactionState=_interactionState;
@property(retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer; // @synthesize deviceMotionContainer=_deviceMotionContainer;
@property(retain, nonatomic) WCAdCommonInteractionInfo *interactionInfo; // @synthesize interactionInfo=_interactionInfo;
@property(nonatomic) __weak id <WCAdCommonInteractionLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdCommonInteractionView *interactionView; // @synthesize interactionView=_interactionView;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)reportShakeSucceedEvent;
- (void)updateShakeMaxGForceWithX:(double)arg1 y:(double)arg2;
- (id)fetchInteractionReportInfo;
- (unsigned long long)fetchRelatedItemScene;
- (id)fetchRelatedDataItem;
- (_Bool)isTimelineScene;
- (_Bool)isInteractionViewContainerVisible;
- (_Bool)isApplicationStateValid;
- (void)updateDeviceMotionState;
- (void)reset;
- (void)update;
- (void)stop;
- (void)start;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)onWindowDidBecomeKey:(id)arg1;
- (void)addNotificationObservers;
- (void)dealloc;
- (id)initWithInteractionInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

