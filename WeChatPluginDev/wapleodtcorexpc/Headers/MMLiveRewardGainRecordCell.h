//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveRewardGainsInfo, MMFinderLiveTask, UIImageView;
@protocol MMLiveRewardGainRecordCellDelegate;

@interface MMLiveRewardGainRecordCell
{
    _Bool _forceDarkMode;
    id <MMLiveRewardGainRecordCellDelegate> _cellDelegate;
    MMCPLabel *_rankLabel;
    MMCPLabel *_displayNameLabel;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveRewardGainsInfo *_rewardGainsInfo;
    UIImageView *_iconView;
    MMCPLabel *_rewardGainValueLabel;
    long long _rank;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMCPLabel *rewardGainValueLabel; // @synthesize rewardGainValueLabel=_rewardGainValueLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMFinderLiveRewardGainsInfo *rewardGainsInfo; // @synthesize rewardGainsInfo=_rewardGainsInfo;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMCPLabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) __weak id <MMLiveRewardGainRecordCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithRewardGainsInfo:(id)arg1 forceDarkMode:(_Bool)arg2 rank:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

