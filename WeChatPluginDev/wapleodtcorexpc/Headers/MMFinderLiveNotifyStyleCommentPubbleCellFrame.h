//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, NSMutableDictionary, UIFont;

@interface MMFinderLiveNotifyStyleCommentPubbleCellFrame
{
    UIFont *_topCommentContentFontPotrait;
    UIFont *_topCommentContentFontLandScape;
    NSMutableDictionary *_extraLayoutInfoDict;
}

+ (double)signTextViewHeightForTaskId:(id)arg1;
+ (double)commentPubbleInsetBottomForTaskId:(id)arg1;
+ (double)commentPubbleInsetTopForTaskId:(id)arg1;
+ (double)pubbleCellHeightForTaskId:(id)arg1;
+ (id)labelFontForTaskId:(id)arg1;
+ (double)averageLineHeight;
+ (double)liveNotifyCellHeight;
+ (double)lineHeight;
+ (double)currentLayoutStandardWidth;
+ (double)topCommentMinContentWidth;
+ (double)topCommentMaxContentWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraLayoutInfoDict; // @synthesize extraLayoutInfoDict=_extraLayoutInfoDict;
@property(retain, nonatomic) UIFont *topCommentContentFontLandScape; // @synthesize topCommentContentFontLandScape=_topCommentContentFontLandScape;
@property(retain, nonatomic) UIFont *topCommentContentFontPotrait; // @synthesize topCommentContentFontPotrait=_topCommentContentFontPotrait;
- (_Bool)isCurrentBadgeCountOverLimit:(unsigned long long)arg1;
- (long long)getCurrentContentLines;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)currentExtraLayoutInfo;
- (double)currentLayoutStandardWidth;
- (long long)fansGroupUIStyle;
- (_Bool)isInteractiveNotifyComment;
- (id)getFansGroupInfo;
- (id)getFrequentWatchBadgeInfo:(id)arg1;
- (id)getFrequentWatchSignText:(id)arg1;
- (_Bool)hasFrequentWatchBadge:(id)arg1;
- (id)getFollowerBadgeInfo:(id)arg1;
- (id)getFollowerSignText:(id)arg1;
- (_Bool)hasFollowerBadge:(id)arg1;
- (id)getBuyBadgeInfo:(id)arg1;
- (id)getBuySignText:(id)arg1;
- (_Bool)hasBuyBadge:(id)arg1;
- (id)getBuyCountBadgeInfo:(id)arg1;
- (id)getBuyCountSignText:(id)arg1;
- (id)getMysteriousText:(id)arg1;
- (_Bool)hasMysterious:(id)arg1;
- (_Bool)hasBuyCountBadge:(id)arg1;
- (id)getInvisiableBadgeName:(id)arg1;
- (_Bool)hasInvisiableBadge:(id)arg1;
- (id)getFansGroupName:(id)arg1;
- (unsigned int)getFansGroupRank:(id)arg1;
- (_Bool)hasFansGroupRank:(id)arg1;
- (unsigned int)getGlobalRank:(id)arg1;
- (_Bool)hasGlobalRank:(id)arg1;
- (unsigned int)getGloryRank:(id)arg1;
- (_Bool)hasGloryRank:(id)arg1;
- (unsigned int)getRawardRank:(id)arg1;
- (_Bool)hasRewardRank:(id)arg1;
- (_Bool)hasRank:(id)arg1;
- (double)getLastLineMaxY:(id)arg1;
- (long long)getCurrentLines:(id)arg1;
- (_Bool)isCommentContentMultiline;
- (id)getFollowNotifyDisplayContent:(id)arg1 maxContentWidth:(double)arg2;
- (void)calculateSizeForFollowNotify:(id)arg1;
- (id)getLikeNotifyDisplayContent:(id)arg1 maxContentWidth:(double)arg2;
- (void)calculateSizeForTopAreaMsg:(id)arg1;
- (void)calculateSizeForLikeNotify:(id)arg1;
- (void)calculateSizeForOpenShoppingBag:(id)arg1;
- (void)calculateSizeForHotSale:(id)arg1;
- (void)calculateSizeForFriendLike:(id)arg1;
- (void)calculateSizeForAudienceShopping:(id)arg1;
- (void)calculateSizeForUserJoinLive:(id)arg1;
- (void)calculateSizeForTopComment:(id)arg1;
- (void)caculateSizeForComment:(id)arg1;
- (id)getNickNameStr:(id)arg1;
- (id)getDisplayStr:(id)arg1;
- (_Bool)needAutoFitLayoutStandardWidth;
- (_Bool)isCurrentLayouted;
- (id)nickArrStyles;
- (struct CGSize)nickNameSize;
- (id)contentArrStyles;
- (struct CGSize)cellSize;
- (struct CGSize)contentSize;
- (double)signViewFixedHeight;
- (long long)globalSignViewUIStyle;
- (double)signTextViewInsetLeft;
- (double)signTextViewInsetTop;
- (double)glorySignTextViewInsetTop;
- (double)glorySignTextViewInsetLeft;
- (double)commentPubbleInsetRight;
- (double)signTextViewTop;
- (double)signTextViewLeft;
- (id)signLabelFont;
- (double)commentPubbleInsetBottom;
@property(readonly, nonatomic) UIFont *topCommentContentFont;
- (double)commentPubbleInsetTop;
- (double)pubbleCellHeight;
- (id)labelFont;

@end

