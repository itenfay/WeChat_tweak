//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, UILabel, UIView;
@protocol BTBarItemViewModelProtocol;

@interface BTBaseBarItemView
{
    UIView *_headImageView;
    UIView *_subtitleView;
    MMUILabel *_itemSubTitleLabel;
    UIImageView *_arrowView;
    UIImageView *_dotImageView;
    UIImageView *_finderIconView;
    UIView *_lineView;
    id <BTBarItemViewModelProtocol> _itemViewModel;
    unsigned long long _index;
    UIImageView *_borderView;
    UIView *_markWrapperView;
    UILabel *_markView;
}

+ (double)iconWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIView *markWrapperView; // @synthesize markWrapperView=_markWrapperView;
@property(retain, nonatomic) UIImageView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) id <BTBarItemViewModelProtocol> itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *finderIconView; // @synthesize finderIconView=_finderIconView;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *itemSubTitleLabel; // @synthesize itemSubTitleLabel=_itemSubTitleLabel;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *headImageView; // @synthesize headImageView=_headImageView;
- (void)layoutLineViewIfNeed;
- (void)layoutDotImageView;
- (void)layoutSubtitleView;
- (void)layoutHeadImageView;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)initLineViewIfNeed;
- (void)initDotImageView;
- (void)initSubtitleView;
- (void)updateHeaderView;
- (void)initHeaderView;
- (void)initSubviews;
- (id)accessibilityLabel;
- (void)updateViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

