//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderWindowProductInfo, MMTimer, MMUIButton, MMWebImageView, PAGView, UILabel;
@protocol MMFinderLiveFeedStreamProductCardViewDelegate;

@interface MMFinderLiveFeedStreamProductCardView
{
    _Bool _isExpandAnimating;
    id <MMFinderLiveFeedStreamProductCardViewDelegate> _delegate;
    FinderWindowProductInfo *_productInfo;
    unsigned long long _style;
    unsigned long long _watchTimeToChangeBubble;
    CDUnknownBlockType _expandAnimationBlock;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_priceLabel;
    PAGView *_playingIconView;
    MMUIButton *_actionButton;
    MMTimer *_timer;
    FinderWindowProductInfo *_pendingProductInfo;
}

+ (double)defaultHeightWithStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderWindowProductInfo *pendingProductInfo; // @synthesize pendingProductInfo=_pendingProductInfo;
@property(nonatomic) _Bool isExpandAnimating; // @synthesize isExpandAnimating=_isExpandAnimating;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) PAGView *playingIconView; // @synthesize playingIconView=_playingIconView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType expandAnimationBlock; // @synthesize expandAnimationBlock=_expandAnimationBlock;
@property(nonatomic) unsigned long long watchTimeToChangeBubble; // @synthesize watchTimeToChangeBubble=_watchTimeToChangeBubble;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamProductCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)notifyToExpand;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)onActionButtonDidClick:(id)arg1;
- (id)priceString:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

