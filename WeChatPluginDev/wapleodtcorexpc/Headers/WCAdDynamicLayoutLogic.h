//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIView, WCAdDynamicFeedElementInfo, WCDataItem;
@protocol WCAdDynamicLayoutLogicDelegate;

@interface WCAdDynamicLayoutLogic
{
    _Bool _didOnExposedAnimationsShow;
    id <WCAdDynamicLayoutLogicDelegate> _delegate;
    WCDataItem *_dataItem;
    UIView *_dynamicLayoutView;
    WCAdDynamicFeedElementInfo *_latestClickedElementInfo;
    NSMutableDictionary *_animationInfos;
    NSMutableDictionary *_animationViews;
}

+ (id)getDynamicLayoutLogicWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool didOnExposedAnimationsShow; // @synthesize didOnExposedAnimationsShow=_didOnExposedAnimationsShow;
@property(retain, nonatomic) NSMutableDictionary *animationViews; // @synthesize animationViews=_animationViews;
@property(retain, nonatomic) NSMutableDictionary *animationInfos; // @synthesize animationInfos=_animationInfos;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *latestClickedElementInfo; // @synthesize latestClickedElementInfo=_latestClickedElementInfo;
@property(retain, nonatomic) UIView *dynamicLayoutView; // @synthesize dynamicLayoutView=_dynamicLayoutView;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdDynamicLayoutLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getAnimationOptionsForAnimation:(id)arg1;
- (id)fetchValidProperties:(id)arg1 isSpecial:(_Bool)arg2;
- (void)resetAnimation:(id)arg1 toView:(id)arg2;
- (void)resetAnimationsWithEventType:(id)arg1;
- (void)applySpecialAnimationProperties:(id)arg1 toView:(id)arg2 isFromValue:(_Bool)arg3;
- (void)delaySpecialCommonAnimation:(id)arg1;
- (void)applySpecialAnimation:(id)arg1 toView:(id)arg2;
- (void)applyCommonAnimationProperties:(id)arg1 toView:(id)arg2 isFromValue:(_Bool)arg3;
- (void)delayApplyCommonAnimation:(id)arg1;
- (void)applyCommonAnimation:(id)arg1 toView:(id)arg2;
- (void)applyAnimation:(id)arg1 toView:(id)arg2;
- (void)startAnimationsWithEventType:(id)arg1;
- (void)appendAnimationableView:(id)arg1 attachAnimations:(id)arg2;
- (void)postExtraClickWithType:(long long)arg1 url:(id)arg2 rect:(struct CGRect)arg3 view:(id)arg4;
- (void)postExtraClickWithType:(long long)arg1 url:(id)arg2 rect:(struct CGRect)arg3;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onDynamicFeedLayoutClicked:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (void)onDynamicFeedLayoutClicked:(id)arg1 viewTag:(long long)arg2;
- (unsigned int)fetchLatestTransitioningType;
- (void)onElementClickedWithInfo:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (void)onElementClickedWithInfo:(id)arg1 viewTag:(long long)arg2;
- (double)fetchDynamicLayoutViewHeightForWidth:(double)arg1;
- (id)fetchDynamicLayoutView;
- (void)onButtonElementClicked:(id)arg1;
- (void)addClickEventRecursivelyForView:(id)arg1;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

