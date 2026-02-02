//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, PendantPreviewLogic, PendantPreviewSelectView, PendantPreviewView, PreviewBottomButton, UIImageView;

@interface PendantPreviewViewController
{
    _Bool _isInterrupt;
    UIImageView *_topMaskView;
    UIImageView *_bottomMaskView;
    PendantPreviewView *_previewView;
    MMUIView *_bottomBarView;
    long long _currentType;
    PendantPreviewLogic *_logic;
    PendantPreviewSelectView *_selectionView;
    NSString *_pendantUrl;
    PreviewBottomButton *_cameraButton;
    PreviewBottomButton *_sceneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PreviewBottomButton *sceneButton; // @synthesize sceneButton=_sceneButton;
@property(retain, nonatomic) PreviewBottomButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) _Bool isInterrupt; // @synthesize isInterrupt=_isInterrupt;
@property(retain, nonatomic) NSString *pendantUrl; // @synthesize pendantUrl=_pendantUrl;
@property(retain, nonatomic) PendantPreviewSelectView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) PendantPreviewLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) MMUIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) PendantPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImageView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIImageView *topMaskView; // @synthesize topMaskView=_topMaskView;
- (_Bool)is9x16Screen;
- (void)selectedView:(id)arg1 didSelectedIndex:(long long)arg2;
- (void)onEffectReloadFinish;
- (void)onPreviewReload:(id)arg1;
- (void)onLensPackageLoadFail:(id)arg1;
- (void)onLensPackageLoaded:(id)arg1;
- (void)onSwitchCamera;
- (void)onSwitchScene;
- (void)onBack;
- (void)initView;
- (_Bool)useTransparentNavibar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPendantUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

