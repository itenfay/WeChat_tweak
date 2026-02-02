//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveBaseTask, NSMutableDictionary, NSString;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface MMFinderLiveTableStyleCommentPubbleCellFrame
{
    long long _layoutResult;
    NSMutableDictionary *_extraLayoutInfoDict;
}

+ (double)estimateLineHeight:(id)arg1 isBarrageItem:(_Bool)arg2;
+ (double)contentLeftMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extraLayoutInfoDict; // @synthesize extraLayoutInfoDict=_extraLayoutInfoDict;
- (_Bool)supportContentExpand;
@property(readonly, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *finderLiveTask;
- (id)currentExtraLayoutInfo;
- (id)getOfficialNoticeText:(id)arg1;
- (id)getFansGroupInfo;
- (id)getFansGroupName:(id)arg1;
- (unsigned int)getFansGroupRank:(id)arg1;
- (_Bool)hasFansGroupRank:(id)arg1;
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
- (_Bool)hasProductQuestionBadge:(id)arg1;
- (_Bool)hasBuyCountBadge:(id)arg1;
- (id)getInvisiableBadgeInfo:(id)arg1;
- (_Bool)hasInvisiableBadge:(id)arg1;
- (id)getGameEsportRank:(id)arg1;
- (_Bool)hasGameEsportRank:(id)arg1;
- (id)getGameRank:(id)arg1;
- (id)getMysteriousText:(id)arg1;
- (_Bool)hasMysterious:(id)arg1;
- (id)getRoleSignText:(id)arg1;
- (_Bool)hasRoleSign:(id)arg1;
- (_Bool)hasGameRank:(id)arg1;
- (unsigned int)getGlobalRank:(id)arg1;
- (_Bool)hasGlobalRank:(id)arg1;
- (unsigned int)getRawardRank:(id)arg1;
- (_Bool)hasRewardRank:(id)arg1;
- (_Bool)hasRank:(id)arg1;
- (_Bool)isInChatRoomBox:(id)arg1;
- (_Bool)isCurrentBadgeCountOverLimit:(unsigned long long)arg1;
- (struct CGRect)frameOfLastLine:(id)arg1;
- (double)getLastLineMaxY:(id)arg1;
- (long long)getCurrentLines:(id)arg1;
- (unsigned long long)getContentLines;
@property(readonly, nonatomic) _Bool isCombRewardSuffixOverLine;
- (_Bool)isCombRewardMultiline;
- (_Bool)isCommentContentMultiline;
- (void)calculateSizeForSubscribeWithComment:(id)arg1;
- (void)calculateSizeForLivePOIWithComment:(id)arg1;
- (void)calculateSizeForRedPacketWithComment:(id)arg1;
- (void)calculateSizeForRewardWithComment:(id)arg1 signSize:(struct CGSize)arg2 giftImageSize:(struct CGSize)arg3 rewardCountTextSize:(struct CGSize)arg4 maxCellWidth:(double)arg5 maxContentWidth:(double)arg6 lineNum:(unsigned long long)arg7 originX:(double)arg8 otherWidth:(double)arg9 firstLineBaseWidth:(double)arg10;
- (void)calculateSizeForOrderSongRewardWithComment:(id)arg1 signSize:(struct CGSize)arg2 giftImageSize:(struct CGSize)arg3 rewardCountTextSize:(struct CGSize)arg4;
- (void)calculateSizeForComboLiveRewardWithComment:(id)arg1 signSize:(struct CGSize)arg2 giftImageSize:(struct CGSize)arg3 rewardCountTextSize:(struct CGSize)arg4;
- (void)calculateSizeForComboLiveRewardWithComment:(id)arg1;
- (void)calculateSizeForAudienceSubmitProductOrder:(id)arg1;
- (void)calculateSizeForGiftWallRewardWithComment:(id)arg1;
- (void)calculateSizeForAnchorNoticeWithComment:(id)arg1;
- (id)generateDisplayedContentForDataItem:(id)arg1 isExpanded:(_Bool)arg2;
- (void)calculateSizeForLiveAnchorTopicWithComment:(id)arg1;
- (void)calculateSizeForOfficialNoticeWithoutSignWithComment:(id)arg1;
- (void)calculateSizeForOfficialNoticeWithComment:(id)arg1;
- (void)calculateSizeForUserWithComment:(id)arg1;
- (void)lazyCaculateSizeCurrent;
- (void)calculateIfNeeded;
- (_Bool)isCurrentLayouted;
- (_Bool)isLiveTopicExpand;
- (id)contentArrStyles;
- (struct CGSize)cellSize;
- (struct CGSize)contentSize;
- (double)barrageContentRightForPaidBarrageWithComment:(id)arg1;
- (double)barrageContentLeftForPaidBarrageWithComment:(id)arg1;
- (double)barrageContentRightForPaidBarrage;
- (double)barrageContentLeftForPaidBarrage;
- (double)barrageContentTopWithSignIcon;
- (double)barrageSignIconTop;
- (double)barrageContentLeft;
- (double)barrageContentLeftWithStayTimeIcon;
- (double)barrageContentLeftWithProductQueSign;
- (double)barrageContentLeftWithGlobalRankIcon;
- (double)barrageContentLeftWithFansGroupIcon;
- (double)barrageStayTimeIconLeft;
- (double)barrageProductQueSignLeft;
- (double)barrageGlobalRankIconLeft;
- (double)barrageFansGroupIconLeft;
- (struct CGSize)barrageStayTimeIconSize;
- (struct CGSize)barrageGlobalRankIconSize:(unsigned int)arg1;
- (struct CGSize)barrageFansGroupIconSize;
- (double)headImageViewTop;
- (double)contentTopWithHeadImageView;
- (double)contentTopWithSignTextView;
- (double)contentTopWithoutSignTextView;
- (double)contentLeftWithHeadImageView;
- (double)contentLeftWithSignTextView;
- (double)contentLeftWithSignTextViewForComment:(id)arg1;
- (double)contentLeftWithoutSignTextView;
- (double)signTextViewInsetLeft;
- (double)signTextViewInsetTop;
- (double)signTextViewTop;
- (struct CGSize)headImageViewSize;
- (double)headImageViewLeft;
- (double)signTextViewLeft;
- (double)commentPubbleInsetBottom;
- (double)commentPubbleInsetTop;
- (long long)gameEsportUIStyle;
- (long long)gameRankUIStyle;
- (long long)fansGroupUIStyle;
- (long long)globalSignViewUIStyle;
- (id)signLabelFont;
- (id)labelTextColor;
- (id)labelFont;
- (void)caculateSizeForComment:(id)arg1;
- (void)requestSuffix:(id *)arg1 maxLineNum:(int *)arg2 toSupply:(id)arg3;
- (id)getDisplayStr:(id)arg1;
- (id)layoutIdentityKey;
- (long long)layoutResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

