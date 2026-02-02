//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveTaskId, MMHeadImageView, UIImageView, WCFinderContact;
@protocol MMLiveRewardRecipientCellDelegate;

@interface MMLiveRewardRecipientCell
{
    id <MMLiveRewardRecipientCellDelegate> _cellDelegate;
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    UIImageView *_selectionIndicatorView;
    WCFinderContact *_rewardRecipientContact;
    MMFinderLiveTaskId *_liveTaskId;
}

+ (double)getSeperatorLineXMargin;
+ (double)getCellHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderContact *rewardRecipientContact; // @synthesize rewardRecipientContact=_rewardRecipientContact;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <MMLiveRewardRecipientCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)onHeadImageClicked:(id)arg1;
- (void)updateHeadImageConerRadius:(double)arg1;
- (id)liveTask;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithRewardRecipientContact:(id)arg1 liveTaskId:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

