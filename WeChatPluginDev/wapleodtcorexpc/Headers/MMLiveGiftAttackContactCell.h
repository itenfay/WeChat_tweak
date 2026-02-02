//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveTaskId, MMHeadImageView, UIImageView, WCFinderContact;
@protocol MMLiveGiftAttackContactCellDelegate;

@interface MMLiveGiftAttackContactCell
{
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    UIImageView *_selectionIndicatorView;
    WCFinderContact *_giftAttackContact;
    MMFinderLiveTaskId *_liveTaskId;
    id <MMLiveGiftAttackContactCellDelegate> _cellDelegate;
}

+ (double)getSeperatorLineXMargin;
+ (double)getCellHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveGiftAttackContactCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderContact *giftAttackContact; // @synthesize giftAttackContact=_giftAttackContact;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)onHeadImageClicked:(id)arg1;
- (void)updateHeadImageConerRadius:(double)arg1;
- (id)liveTask;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithGiftAttackContact:(id)arg1 liveTaskId:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

