//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupIntimacyInfo, MMUILabel;

@interface MMFinderLiveFansGroupDailyIntimacyTableCell
{
    MMUILabel *_dailyTaskLabel;
    MMUILabel *_speedupLabel;
    MMUILabel *_dailyMaxIntimacy;
    MMUILabel *_dailyCurIntimacy;
    MMUILabel *_dailyDescLabel;
    MMFinderLiveFansGroupIntimacyInfo *_intimacyInfo;
}

+ (double)getCellBottomPadding;
+ (double)getPreferHeightWithIntimacyInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *intimacyInfo; // @synthesize intimacyInfo=_intimacyInfo;
@property(retain, nonatomic) MMUILabel *dailyDescLabel; // @synthesize dailyDescLabel=_dailyDescLabel;
@property(retain, nonatomic) MMUILabel *dailyCurIntimacy; // @synthesize dailyCurIntimacy=_dailyCurIntimacy;
@property(retain, nonatomic) MMUILabel *dailyMaxIntimacy; // @synthesize dailyMaxIntimacy=_dailyMaxIntimacy;
@property(retain, nonatomic) MMUILabel *speedupLabel; // @synthesize speedupLabel=_speedupLabel;
@property(retain, nonatomic) MMUILabel *dailyTaskLabel; // @synthesize dailyTaskLabel=_dailyTaskLabel;
- (void)layoutDailyTaskLabel;
- (void)configWithIntimacyInfo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

