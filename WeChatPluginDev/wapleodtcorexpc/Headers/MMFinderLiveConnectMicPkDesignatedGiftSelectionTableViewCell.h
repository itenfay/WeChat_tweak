//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveRewardGiftItem, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionTableViewCell : UITableViewCell
{
    MMFinderLiveRewardGiftItem *_giftItem;
    UIView *_thumbnailContainerView;
    UIImageView *_thumbnailView;
    UILabel *_displayNameLabel;
    UIImageView *_wecoinIconView;
    UILabel *_pricingLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *pricingLabel; // @synthesize pricingLabel=_pricingLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)updateGiftItem;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

