//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, UIButton, UIImageView, UILabel, UIView, WCFinderFeedContentVM;
@protocol WCFinderDescTableViewCellDelegate;

@interface WCFinderDescTableViewCell
{
    id <WCFinderDescTableViewCellDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    UIImageView *_warningImageView;
    UILabel *_warningTitleLabel;
    UILabel *_tipsTitleLabel;
    UIButton *_continueButton;
    MMTimer *_countDownTimer;
    long long _countDownTimes;
    UIView *_tipsView;
}

+ (_Bool)isRecommendTips:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) long long countDownTimes; // @synthesize countDownTimes=_countDownTimes;
@property(retain, nonatomic) MMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak UILabel *tipsTitleLabel; // @synthesize tipsTitleLabel=_tipsTitleLabel;
@property(nonatomic) __weak UILabel *warningTitleLabel; // @synthesize warningTitleLabel=_warningTitleLabel;
@property(nonatomic) __weak UIImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderDescTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldCaluculateAsFocusCell;
- (void)willMoveToWindow:(id)arg1;
- (void)tipsClickActionFailure;
- (void)tipsClickActionSuccessful;
- (void)countDownAction;
- (void)startTimmer;
- (void)startCountDownAction;
- (void)updateWithContentVM:(id)arg1;
- (id)setUpUI;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

