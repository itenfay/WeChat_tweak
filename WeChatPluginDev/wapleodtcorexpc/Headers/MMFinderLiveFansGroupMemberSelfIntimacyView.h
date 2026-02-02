//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveTaskId, MMUIImageView, MMUILabel;

@interface MMFinderLiveFansGroupMemberSelfIntimacyView : UIView
{
    MMUILabel *_rankLabel;
    MMUILabel *_descLabel;
    MMCPLabel *_displayNameLabel;
    MMUIImageView *_roleIconImageView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMUILabel *_rewardAmountLabel;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMUILabel *rewardAmountLabel; // @synthesize rewardAmountLabel=_rewardAmountLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMUIImageView *roleIconImageView; // @synthesize roleIconImageView=_roleIconImageView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
- (id)liveTask;
- (void)updateWithFinderLiveContact:(id)arg1 rank:(unsigned long long)arg2 intimacyToPrevRank:(unsigned int)arg3;
- (void)layoutSubviews;
- (void)initRankLabel;
- (void)initFansGroupSignView;
- (void)initRewardAmountLabel;
- (void)initRoleIconImageView;
- (void)initDescLabel;
- (void)initNameLabel;
- (void)initUI;
- (id)initWithTaskId:(id)arg1;

@end

