//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface MMLiveRewardQuotaCell
{
    unsigned int _rewardQuota;
    UIImageView *_selectionIndicatorView;
    MMUILabel *_rewardQuotaLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int rewardQuota; // @synthesize rewardQuota=_rewardQuota;
@property(retain, nonatomic) MMUILabel *rewardQuotaLabel; // @synthesize rewardQuotaLabel=_rewardQuotaLabel;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithRewardQuota:(unsigned int)arg1 optionName:(id)arg2 isSelected:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

