//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIButton, NSString, RichTextView, WCFinderDataItem, WCFinderLandScapePlayCompleteCoverInfoView;
@protocol WCFinderLandScapePlayCompleteTipsViewDelegate;

@interface WCFinderLandScapePlayCompleteTipsView
{
    int _scene;
    id <WCFinderLandScapePlayCompleteTipsViewDelegate> _delegate;
    MMUIButton *_replayBtn;
    WCFinderDataItem *_dataItem;
    WCFinderLandScapePlayCompleteCoverInfoView *_coverView;
    RichTextView *_descLabel;
    RichTextView *_recommentReasonLabel;
    MMUIButton *_returnBtn;
    MMTimer *_countdownTimer;
    long long _curCountdownNum;
}

- (void).cxx_destruct;
@property(nonatomic) long long curCountdownNum; // @synthesize curCountdownNum=_curCountdownNum;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) MMUIButton *returnBtn; // @synthesize returnBtn=_returnBtn;
@property(retain, nonatomic) RichTextView *recommentReasonLabel; // @synthesize recommentReasonLabel=_recommentReasonLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLandScapePlayCompleteCoverInfoView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) MMUIButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(nonatomic) __weak id <WCFinderLandScapePlayCompleteTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onTapFinderLandScapePlayCompleteCoverInfoView;
- (struct CGSize)coverViewSizeThatFitHeight:(double)arg1;
- (struct CGSize)coverViewSize;
- (double)replayBtnHorizonSpacing;
- (id)replayBtnFont;
- (struct CGSize)replayBtnSize;
- (id)descLabelFont;
- (id)recommentReasonFont;
- (double)descLabelFWidthWithCoverViewSize:(struct CGSize)arg1;
- (double)centerContentLRMargin;
- (double)replayBtnBottomMargin;
- (double)coverTopMargin;
- (double)coverRightMargin;
- (double)recommentReasonBottomMargin;
- (void)layoutSubviews;
- (void)onClickPlayNextBtn;
- (void)onClickReplayBtn;
- (void)onClickReturnBtn;
- (void)reportShowAction;
- (void)landScapeStateWillChange:(_Bool)arg1;
- (void)stopCountdownAction;
- (void)updateCountTimer;
- (void)startCountdown;
- (id)getRecommentReasonStr:(id)arg1;
- (void)updateWithDataItem:(id)arg1;
- (void)setupViewLandScapeState;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

