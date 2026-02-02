//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIView;

@interface FaceRecogResultView
{
    UILabel *_waitLabel;
    UIImageView *_loadingBlurView;
    UIImageView *_loadingIndicator;
    UIView *_faceIconBgView;
    UIImageView *_faceIcon;
    UIButton *_closeButton;
    UIButton *_feedbackButton;
    _Bool _showIconFromFaceCenter;
    double _faceTipsTopOffset;
    UIButton *_bizCustomButton;
    UILabel *_subDescLabel;
    struct CGRect _faceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subDescLabel; // @synthesize subDescLabel=_subDescLabel;
@property(retain, nonatomic) UIButton *bizCustomButton; // @synthesize bizCustomButton=_bizCustomButton;
@property(nonatomic) _Bool showIconFromFaceCenter; // @synthesize showIconFromFaceCenter=_showIconFromFaceCenter;
@property(nonatomic) double faceTipsTopOffset; // @synthesize faceTipsTopOffset=_faceTipsTopOffset;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
- (void)layoutSubviews;
- (struct CGRect)getTipIconFrame;
- (void)stopLoading;
- (void)showOKView;
- (void)showFailedTip:(id)arg1 subDesc:(id)arg2;
- (void)showFailedTip:(id)arg1;
- (void)showBizBtn:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)showCloseBtn:(id)arg1 strongStyle:(_Bool)arg2 target:(id)arg3 sel:(SEL)arg4;
- (void)showFeedBackBtn:(id)arg1 sel:(SEL)arg2;
- (void)startLoadingAnimate;
- (void)showLoadingWithTip:(id)arg1;
- (void)resetView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

