//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MiniAudioTaskContentView, NSMutableDictionary, NSString, UIImage, WCFinderMinimizeFloatingStateView, WCFinderMinimizePlayCtrl;
@protocol WCFinderMinimizeContentViewProtocol, WCFinderMinimizeFloatingViewDelegate;

@interface WCFinderMinimizeFloatingView : UIView
{
    WCFinderMinimizePlayCtrl *_playCtrl;
    UIView *_minimizeAnimatingView;
    UIView *_maxmizeAnimatingView;
    MMUIButton *_audioModeBtn;
    MiniAudioTaskContentView *_outterView;
    id <WCFinderMinimizeFloatingViewDelegate> _delegate;
    MMUIButton *_coverBtnView;
    UIView<WCFinderMinimizeContentViewProtocol> *_displayView;
    UIView *_backgroundView;
    UIImage *_coverImage;
    NSMutableDictionary *_reportUDFKV;
    WCFinderMinimizeFloatingStateView *_stateView;
    struct CGRect _originFrame;
}

+ (struct CGSize)fitMinimizeNotCutFloatingSizeForRound:(struct CGSize)arg1;
+ (struct CGSize)fitMinimizeNotCutFloatingSize:(struct CGSize)arg1;
+ (double)cornerRaidus;
+ (double)displayCornerRadius;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMinimizeFloatingStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) NSMutableDictionary *reportUDFKV; // @synthesize reportUDFKV=_reportUDFKV;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(retain, nonatomic) UIView<WCFinderMinimizeContentViewProtocol> *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) MMUIButton *coverBtnView; // @synthesize coverBtnView=_coverBtnView;
@property(nonatomic) __weak id <WCFinderMinimizeFloatingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MiniAudioTaskContentView *outterView; // @synthesize outterView=_outterView;
@property(retain, nonatomic) MMUIButton *audioModeBtn; // @synthesize audioModeBtn=_audioModeBtn;
@property(retain, nonatomic) UIView *maxmizeAnimatingView; // @synthesize maxmizeAnimatingView=_maxmizeAnimatingView;
@property(retain, nonatomic) UIView *minimizeAnimatingView; // @synthesize minimizeAnimatingView=_minimizeAnimatingView;
@property(nonatomic) __weak WCFinderMinimizePlayCtrl *playCtrl; // @synthesize playCtrl=_playCtrl;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (id)floatingFrames;
- (void)cleanContent;
- (void)updateCurDisplayViewWithReportUDFKV:(id)arg1;
- (void)updateDisplayView:(id)arg1;
- (void)updateMinimizeInfo:(id)arg1 reportUDFKV:(id)arg2;
- (void)onMediaPlayContentViewUpdated:(id)arg1;
- (void)onMediaPlayInfoUpdate:(id)arg1;
- (void)onMediaPlayStateChanged:(id)arg1;
- (void)onClickPlayBtn;
- (id)prepareRestoreContentView;
- (void)onClickFloatingView;
- (void)onCloseButtonClicked;
- (void)onAudioModeBtnClicked;
- (void)updatePlayType;
- (void)layoutSubviews;
- (void)prepareCoverView;
- (void)updatePlayBtnState:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

