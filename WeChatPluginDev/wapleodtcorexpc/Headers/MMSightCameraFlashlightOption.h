//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSString, WCElasticLayoutView;
@protocol MMSightCameraFlashlightOptionDelegate;

@interface MMSightCameraFlashlightOption : NSObject
{
    MMUIButton *_legacyIconButton;
    MMUIButton *_topBarButton;
    id <MMSightCameraFlashlightOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_btnFlashlightIcon;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *btnFlashlightIcon; // @synthesize btnFlashlightIcon=_btnFlashlightIcon;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraFlashlightOptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *topBarButton; // @synthesize topBarButton=_topBarButton;
@property(retain, nonatomic) MMUIButton *legacyIconButton; // @synthesize legacyIconButton=_legacyIconButton;
- (void)_initLegacyIconButton;
- (void)_initViews;
- (void)_onFlashlightSelectionChanged;
- (void)onClickTopBarBtn:(id)arg1;
- (void)_onClickIconView;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (id)initLegacyWithContainerFrame:(struct CGRect)arg1;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

