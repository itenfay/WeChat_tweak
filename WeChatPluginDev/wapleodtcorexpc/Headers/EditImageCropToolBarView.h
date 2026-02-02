//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageCropToolBarViewModel, UIButton, UIImageView, UIView, WCEditImageCropToolBarViewUIConfig;
@protocol EditImageCropToolBarDelegate;

@interface EditImageCropToolBarView
{
    _Bool _revertBtnEnable;
    UIImageView *_bottomBackgroundView;
    _Bool _bBtnUseWord;
    id <EditImageCropToolBarDelegate> _delegate;
    UIButton *_doneBtn;
    UIButton *_cancelBtn;
    UIButton *_revertBtn;
    UIView *_topLine;
    WCEditImageCropToolBarViewUIConfig *_uiConfig;
    EditImageCropToolBarViewModel *_viewStateModel;
    UIButton *_rotateBtn;
    UIButton *_cropProportionBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cropProportionBtn; // @synthesize cropProportionBtn=_cropProportionBtn;
@property(retain, nonatomic) UIButton *rotateBtn; // @synthesize rotateBtn=_rotateBtn;
@property(retain, nonatomic) EditImageCropToolBarViewModel *viewStateModel; // @synthesize viewStateModel=_viewStateModel;
@property(retain, nonatomic) WCEditImageCropToolBarViewUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) _Bool bBtnUseWord; // @synthesize bBtnUseWord=_bBtnUseWord;
@property(retain, nonatomic) UIButton *_revertBtn; // @synthesize _revertBtn;
@property(retain, nonatomic) UIButton *_cancelBtn; // @synthesize _cancelBtn;
@property(retain, nonatomic) UIButton *_doneBtn; // @synthesize _doneBtn;
@property(nonatomic) __weak id <EditImageCropToolBarDelegate> _delegate; // @synthesize _delegate;
- (void)onReverBtnClick:(id)arg1;
- (void)onCropProportionBtnClicked:(id)arg1;
- (void)hideRotateBtn:(_Bool)arg1 withAnimation:(_Bool)arg2;
@property(readonly, nonatomic) _Bool canAddTopLine;
@property(readonly, nonatomic) _Bool isRevertBtnEnabled;
- (void)canRevertEnable:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end

