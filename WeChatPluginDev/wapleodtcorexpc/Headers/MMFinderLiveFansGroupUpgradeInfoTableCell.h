//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupUpgradeInfo, MMUILabel;

@interface MMFinderLiveFansGroupUpgradeInfoTableCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_upgradeConditionLabel;
    MMUILabel *_intimacyIncCountLabel;
    MMUILabel *_upgradeStatusLabel;
    MMFinderLiveFansGroupUpgradeInfo *_upgradeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupUpgradeInfo *upgradeInfo; // @synthesize upgradeInfo=_upgradeInfo;
@property(retain, nonatomic) MMUILabel *upgradeStatusLabel; // @synthesize upgradeStatusLabel=_upgradeStatusLabel;
@property(retain, nonatomic) MMUILabel *intimacyIncCountLabel; // @synthesize intimacyIncCountLabel=_intimacyIncCountLabel;
@property(retain, nonatomic) MMUILabel *upgradeConditionLabel; // @synthesize upgradeConditionLabel=_upgradeConditionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithUpgradeInfo:(id)arg1;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

