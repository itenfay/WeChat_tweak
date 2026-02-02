//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveGroupedBadgeView, UIImageView, UILabel;

@interface MMFinderLivePaidConnectMicAudienceOperationPanelUserCell : UITableViewCell
{
    UILabel *_rankLabel;
    UILabel *_nameLabel;
    MMFinderLiveGroupedBadgeView *_groupedBadgeView;
    UIImageView *_wecoinIconImageView;
    UILabel *_priceAmountLabel;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *priceAmountLabel; // @synthesize priceAmountLabel=_priceAmountLabel;
@property(retain, nonatomic) UIImageView *wecoinIconImageView; // @synthesize wecoinIconImageView=_wecoinIconImageView;
@property(retain, nonatomic) MMFinderLiveGroupedBadgeView *groupedBadgeView; // @synthesize groupedBadgeView=_groupedBadgeView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
- (id)liveTaskId;
- (void)configWithUser:(id)arg1 rank:(unsigned long long)arg2 showPriceAmount:(_Bool)arg3;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

