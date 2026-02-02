//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSString, UIScrollView, WCElasticLayoutView;
@protocol MMSightCameraProModeOptionDelegate;

@interface MMSightCameraProModeOption : NSObject
{
    MMUIButton *_legacyIconButton;
    id <MMSightCameraProModeOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    UIScrollView *_svProModeOptionList;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *svProModeOptionList; // @synthesize svProModeOptionList=_svProModeOptionList;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraProModeOptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *legacyIconButton; // @synthesize legacyIconButton=_legacyIconButton;
- (void)_initViews;
- (void)_initLegacyIconButton;
- (void)_setAlpha:(double)arg1 forView:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_resetAllOptionViewIfNeeded;
- (void)_changeProModeIconBtnSelection:(_Bool)arg1;
- (void)_onClickSwitchButton;
- (void)elasticLayoutView:(id)arg1 didExpandWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(id)arg1 willExpandWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(id)arg1 didShrinkWithAnimated:(_Bool)arg2;
- (void)elasticLayoutView:(id)arg1 willShrinkWithAnimated:(_Bool)arg2;
- (void)manualTriggerClickSwitchButton;
- (void)resetProModeOptionList;
- (void)updateProModeOptionList:(id)arg1;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

