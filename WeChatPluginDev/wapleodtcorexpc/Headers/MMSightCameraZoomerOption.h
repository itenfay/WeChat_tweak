//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCameraZoomFactorInfo, MMUIButton, NSArray, NSString, WCElasticLayoutView;
@protocol MMSightCameraZoomerOptionDelegate;

@interface MMSightCameraZoomerOption : NSObject
{
    id <MMSightCameraZoomerOptionDelegate> _delegate;
    MMUIButton *_iconButton;
    WCElasticLayoutView *_elasticLayoutView;
    MMCameraZoomFactorInfo *_zoomFactorInfo;
    NSArray *_zoomerBtnList;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *zoomerBtnList; // @synthesize zoomerBtnList=_zoomerBtnList;
@property(retain, nonatomic) MMCameraZoomFactorInfo *zoomFactorInfo; // @synthesize zoomFactorInfo=_zoomFactorInfo;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(retain, nonatomic) MMUIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) __weak id <MMSightCameraZoomerOptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTitle:(id)arg1 forZoomerBtn:(id)arg2;
- (void)_updateIconButtonTitle:(id)arg1;
- (id)_createZoomerBtnWithTitle:(id)arg1;
- (void)_initViews;
- (void)_relayoutZoomerBtnAtCenter:(id)arg1;
- (void)_onZoomerBtn:(id)arg1 changedSelectionTo:(_Bool)arg2 manually:(_Bool)arg3;
- (void)_onClickZoomFactorBtn:(id)arg1;
- (void)_onIconButtonChangedSelectionTo:(_Bool)arg1;
- (void)_onClickIconButton;
- (double)visualFactorFromCameraFactor:(double)arg1;
- (id)_convertFactorTitleFromCameraFactor:(double)arg1;
- (void)_loadCameraZoomFactorInfo;
- (void)relayoutSelectedZoomerBtnAtCenter;
- (void)updateCurrentZoomFactor:(double)arg1;
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

