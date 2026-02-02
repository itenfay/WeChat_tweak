//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FinderLiveContact, MMCPLabel, MMFinderLiveFansGroupSignView, MMFinderLiveTask, MMLiveTaskId, MMUIImageView, MMUILabel, UIView;

@interface MMFinderLiveFansGroupMemberTableViewCell : UITableViewCell
{
    _Bool _bNeedSeparatorLine;
    MMLiveTaskId *_taskId;
    MMUILabel *_rankLabel;
    MMCPLabel *_displayNameLabel;
    MMUIImageView *_roleIconImageView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMUILabel *_rewardAmountLabel;
    UIView *_separatorLine;
    FinderLiveContact *_memberContact;
}

+ (id)identifier;
+ (double)innerLeftPadding;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveContact *memberContact; // @synthesize memberContact=_memberContact;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUILabel *rewardAmountLabel; // @synthesize rewardAmountLabel=_rewardAmountLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMUIImageView *roleIconImageView; // @synthesize roleIconImageView=_roleIconImageView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMUILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool bNeedSeparatorLine; // @synthesize bNeedSeparatorLine=_bNeedSeparatorLine;
- (id)accessibilityLabel;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updateWithFinderLiveContact:(id)arg1 rank:(unsigned long long)arg2;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initRankLabel;
- (void)initSeperatorLine;
- (void)initFansGroupSignView;
- (void)initRewardAmountLabel;
- (void)initRoleIconImageView;
- (void)initNameLabel;
- (void)initUI;
- (_Bool)shouldAdaptToDarkLight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

