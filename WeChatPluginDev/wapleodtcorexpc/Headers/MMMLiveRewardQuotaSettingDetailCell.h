//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIView;

@interface MMMLiveRewardQuotaSettingDetailCell
{
    unsigned long long _rewardQuota;
    MMUILabel *_titleLabel;
    MMUILabel *_rewardQuotaLabel;
    MMUIButton *_arrowButton;
    UIView *_separatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) MMUILabel *rewardQuotaLabel; // @synthesize rewardQuotaLabel=_rewardQuotaLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long rewardQuota; // @synthesize rewardQuota=_rewardQuota;
- (void)updateRewardQuota:(unsigned long long)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

