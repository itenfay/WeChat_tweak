//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIImageView, UILabel, VoIPMPUIScreenProfileView, VoIPMPUITouchAlgorithm, XImageViewRenderer;

@interface VoIPMPUIScreenWindowView : UIView
{
    _Bool _isMirror;
    _Bool _canMove;
    _Bool _isTalking;
    _Bool _isFliping;
    _Bool _isNewbieHidden;
    _Bool _isRestoreTopViewHidden;
    _Bool _isRestoreBottomViewHidden;
    _Bool _isSuspend;
    XImageViewRenderer *_renderer;
    VoIPMPUIScreenProfileView *_profileView;
    CDUnknownBlockType _onTapEvent;
    CDUnknownBlockType _onRestoreEvent;
    CDUnknownBlockType _willMoveEvent;
    CDUnknownBlockType _onMoveEvent;
    CDUnknownBlockType _didMoveEvent;
    VoIPMPUITouchAlgorithm *_touchAlgorithm;
    UIView *_canvasView;
    UIView *_blurView;
    UILabel *_newbieLabel;
    UIView *_restoreTopView;
    UIImageView *_restoreTopIconImageView;
    UIView *_restoreBottomView;
    UIImageView *_restoreBottomIconImageView;
    CAShapeLayer *_arrowLayer;
    unsigned long long _foldEdge;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSuspend; // @synthesize isSuspend=_isSuspend;
@property(nonatomic) unsigned long long foldEdge; // @synthesize foldEdge=_foldEdge;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(nonatomic) _Bool isRestoreBottomViewHidden; // @synthesize isRestoreBottomViewHidden=_isRestoreBottomViewHidden;
@property(retain, nonatomic) UIImageView *restoreBottomIconImageView; // @synthesize restoreBottomIconImageView=_restoreBottomIconImageView;
@property(retain, nonatomic) UIView *restoreBottomView; // @synthesize restoreBottomView=_restoreBottomView;
@property(nonatomic) _Bool isRestoreTopViewHidden; // @synthesize isRestoreTopViewHidden=_isRestoreTopViewHidden;
@property(retain, nonatomic) UIImageView *restoreTopIconImageView; // @synthesize restoreTopIconImageView=_restoreTopIconImageView;
@property(retain, nonatomic) UIView *restoreTopView; // @synthesize restoreTopView=_restoreTopView;
@property(retain, nonatomic) UILabel *newbieLabel; // @synthesize newbieLabel=_newbieLabel;
@property(nonatomic) _Bool isNewbieHidden; // @synthesize isNewbieHidden=_isNewbieHidden;
@property(nonatomic) _Bool isFliping; // @synthesize isFliping=_isFliping;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool canMove; // @synthesize canMove=_canMove;
@property(retain, nonatomic) VoIPMPUITouchAlgorithm *touchAlgorithm; // @synthesize touchAlgorithm=_touchAlgorithm;
@property(copy, nonatomic) CDUnknownBlockType didMoveEvent; // @synthesize didMoveEvent=_didMoveEvent;
@property(copy, nonatomic) CDUnknownBlockType onMoveEvent; // @synthesize onMoveEvent=_onMoveEvent;
@property(copy, nonatomic) CDUnknownBlockType willMoveEvent; // @synthesize willMoveEvent=_willMoveEvent;
@property(copy, nonatomic) CDUnknownBlockType onRestoreEvent; // @synthesize onRestoreEvent=_onRestoreEvent;
@property(copy, nonatomic) CDUnknownBlockType onTapEvent; // @synthesize onTapEvent=_onTapEvent;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(retain, nonatomic) VoIPMPUIScreenProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) XImageViewRenderer *renderer; // @synthesize renderer=_renderer;
- (void)layoutSubviews;
- (void)adsorbToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)VoIPMPUITouchAlgorithmIsFoldEnabled;
- (struct CGPoint)VoIPMPUITouchAlgorithmTransformPointWithPoint:(struct CGPoint)arg1;
- (id)VoIPMPUITouchAlgorithmView;
- (void)VoIPMPUITouchAlgorithmOnTaped:(struct CGPoint)arg1;
- (void)VoIPMPUITouchAlgorithmOnMoveWithOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnEndWithOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnBegin;
- (void)loadRender;
- (void)layoutCanvasView;
- (void)layoutProfileView;
- (void)layoutBlurView;
- (void)layoutRestore;
- (void)layoutNewbie;
- (void)flipWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupSuspend:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

