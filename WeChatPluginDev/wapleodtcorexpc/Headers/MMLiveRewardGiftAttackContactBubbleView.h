//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, NSArray, NSIndexPath, UIImageView;

@interface MMLiveRewardGiftAttackContactBubbleView
{
    CDUnknownBlockType _tapAction;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveTaskId *_liveTaskId;
    NSIndexPath *_indexPath;
    NSArray *_curGiftAttackContacts;
    MMUILabel *_titleLabel;
    NSArray *_giftAttackContactHeadImageViews;
    MMCPLabel *_firstGiftAttackContactNickNameLabel;
    UIImageView *_selectContactArrowIconView;
}

+ (double)GetEstimateHeight;
+ (double)GetEstimateWidth:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectContactArrowIconView; // @synthesize selectContactArrowIconView=_selectContactArrowIconView;
@property(retain, nonatomic) MMCPLabel *firstGiftAttackContactNickNameLabel; // @synthesize firstGiftAttackContactNickNameLabel=_firstGiftAttackContactNickNameLabel;
@property(retain, nonatomic) NSArray *giftAttackContactHeadImageViews; // @synthesize giftAttackContactHeadImageViews=_giftAttackContactHeadImageViews;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *curGiftAttackContacts; // @synthesize curGiftAttackContacts=_curGiftAttackContacts;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)updateWithGiftAttackContacts:(id)arg1;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)removeGiftAttackContactHeaderViews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 orientation:(long long)arg3;

@end

