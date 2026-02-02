//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveRewardGiftItem, UIImageView, UILabel;

@interface MMFinderLiveConnectMicExtendedPkSelectDesignatedGiftItemTableViewCell : UITableViewCell
{
    MMFinderLiveRewardGiftItem *_giftItem;
    UILabel *_bulletLabel;
    UILabel *_titleLabel;
    UIImageView *_thumbnailView;
    UIImageView *_chevronView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *bulletLabel; // @synthesize bulletLabel=_bulletLabel;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)updateThumbnail;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

