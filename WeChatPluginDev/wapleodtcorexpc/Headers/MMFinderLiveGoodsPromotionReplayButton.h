//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGoodsViewModel, MMTimerLabel, MMUIActivityIndicatorView, MMUILabel, MMUIView, UIImageView, UIView;

@interface MMFinderLiveGoodsPromotionReplayButton
{
    long long _currentState;
    CDUnknownBlockType _replayButtonDidClickedBlock;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_maskView;
    UIImageView *_iconView;
    MMUILabel *_actionTextLabel;
    MMTimerLabel *_timerLabel;
    MMUIView *_dotTipsView;
    MMFinderLiveGoodsViewModel *_goodsViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsViewModel *goodsViewModel; // @synthesize goodsViewModel=_goodsViewModel;
@property(retain, nonatomic) MMUIView *dotTipsView; // @synthesize dotTipsView=_dotTipsView;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) MMUILabel *actionTextLabel; // @synthesize actionTextLabel=_actionTextLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType replayButtonDidClickedBlock; // @synthesize replayButtonDidClickedBlock=_replayButtonDidClickedBlock;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)onTapInside:(id)arg1;
- (void)updateTimeLabel:(unsigned int)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)updateUIWithReplayRecordState:(long long)arg1;
- (void)useSubViews:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

