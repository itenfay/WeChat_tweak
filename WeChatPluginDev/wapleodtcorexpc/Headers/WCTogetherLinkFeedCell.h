//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIImageView, UIView, WCImageView;

@interface WCTogetherLinkFeedCell
{
    UIView *_iconContainerView;
    WCImageView *_iconImageView;
    MMWebImageView *_iconWebImageView;
    UIImageView *_iconDefaultImageView;
    UIView *_playIconContainerView;
    UIImageView *_playIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIView *playIconContainerView; // @synthesize playIconContainerView=_playIconContainerView;
@property(retain, nonatomic) UIImageView *iconDefaultImageView; // @synthesize iconDefaultImageView=_iconDefaultImageView;
@property(retain, nonatomic) MMWebImageView *iconWebImageView; // @synthesize iconWebImageView=_iconWebImageView;
@property(retain, nonatomic) WCImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
- (void)contentDidTap;
- (void)layoutItemContentView;
- (void)loadIconViews;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

@end

