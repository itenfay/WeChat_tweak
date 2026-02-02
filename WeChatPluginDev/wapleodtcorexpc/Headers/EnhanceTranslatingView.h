//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class EnhanceTranslatingCropImageView, EnhanceTranslatingRectBoardView, EnhanceTranslatingResultView, MMUIButton, NSString, OCRTransReport, UIView;
@protocol EnhanceTranslatingViewDelegate;

@interface EnhanceTranslatingView : UIImageView
{
    unsigned int _sessionId;
    _Bool _active;
    int _scene;
    id <EnhanceTranslatingViewDelegate> _delegate;
    MMUIButton *_cancelButton;
    double _cancelBtnCenterY;
    OCRTransReport *_report;
    EnhanceTranslatingCropImageView *_boardView;
    EnhanceTranslatingRectBoardView *_rectBoardView;
    UIView *_maskView;
    UIImageView *_perspectiveAnimationView;
    EnhanceTranslatingResultView *_resultView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EnhanceTranslatingResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UIImageView *perspectiveAnimationView; // @synthesize perspectiveAnimationView=_perspectiveAnimationView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) EnhanceTranslatingRectBoardView *rectBoardView; // @synthesize rectBoardView=_rectBoardView;
@property(retain, nonatomic) EnhanceTranslatingCropImageView *boardView; // @synthesize boardView=_boardView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) OCRTransReport *report; // @synthesize report=_report;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) double cancelBtnCenterY; // @synthesize cancelBtnCenterY=_cancelBtnCenterY;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <EnhanceTranslatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAfterTransitionAnimation;
- (void)updateBeforeTransitionAnimation;
- (void)cancelTranslate;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)autoTranslatingImage:(id)arg1;
- (void)showResultView:(id)arg1 backgroundView:(id)arg2 boardSize:(struct CGSize)arg3;
- (void)doPerspectiveTransform:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 imgSize:(struct CGSize)arg4 leftTop:(struct CGPoint)arg5 rightTop:(struct CGPoint)arg6 rightBottom:(struct CGPoint)arg7 leftBottom:(struct CGPoint)arg8;
- (void)showDocumentImg:(id)arg1 sourceImg:(id)arg2 sessionId:(unsigned long long)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7 boardAnimated:(_Bool)arg8;
- (void)onTapCancelBtn;
- (void)reset;
- (void)invalidate;
@property(readonly, nonatomic) UIImageView *contentImageView;
- (void)onTapMaskView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

