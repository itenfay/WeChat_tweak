//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BTRecommendCardMgr : NSObject
{
}

+ (_Bool)canOpenLandScapeVideoPage:(id)arg1;
+ (unsigned int)getMainSessionMediaTypeFromRecFinderCardWrapper:(id)arg1;
+ (id)getMainSessionTitleFromRecFinderCardWrapper:(id)arg1;
+ (_Bool)isBrandContactDidBlockFinderWithRecFinderCardData:(id)arg1;
+ (_Bool)isContactSubscribedWithRecFinderCardData:(id)arg1;
+ (_Bool)isFinderContactSubscribedWithRecFinderCardData:(id)arg1;
+ (_Bool)isBrandContactSubscribedWithRecFinderCardData:(id)arg1;
+ (id)getFinderCardDataNeedUpdateIndexWithRecommendSectionData:(id)arg1 blockedFinderUserName:(id)arg2;
+ (id)getFinderCardDataNeedUpdateIndexWithRecommendSectionData:(id)arg1;
+ (_Bool)isFinderCardDataContainMPInterestDataWithStyle:(unsigned int)arg1 subType:(int)arg2 finderCardDatas:(id)arg3 fromSessionIdInfo:(id)arg4;
+ (id)getFinderMPInterestDataWithFromSessionIdInfo:(id)arg1 useBrandTimelineMsgMgrConfig:(_Bool)arg2;
+ (_Bool)isValidFinderInterestCardData:(id)arg1;
+ (_Bool)enableFinderInterestCard:(_Bool)arg1;
+ (_Bool)isFinderCardDataContainMPInterestDataWithRecommendSectionData:(id)arg1;
+ (_Bool)internalCheckIsFinderCardDataNeedDeleteWithRecommendSectionData:(id)arg1 blockedFinderUserName:(id)arg2;
+ (_Bool)isFinderCardDataNeedDeleteWithRecommendSectionData:(id)arg1 blockedFinderUserName:(id)arg2;
+ (_Bool)isFinderCardDataNeedDeleteWithRecommendSectionData:(id)arg1;
+ (_Bool)isFinderCardDataAllUserHasDeletedWithRecCardWrapper:(id)arg1;
+ (id)getCoverUrlForMissedSubsItemWithRecMsgData:(id)arg1 itemIndex:(unsigned int)arg2;
+ (_Bool)isMissedSubsItemShowBigCoverWithRecMsgData:(id)arg1 itemIndex:(unsigned int)arg2;
+ (_Bool)canHandleTLRecFinderCardData:(id)arg1;
+ (_Bool)canHandleFinderRecCardWrapper:(id)arg1;
+ (_Bool)canHandleCanvasRecCardWrapper:(id)arg1;
+ (_Bool)canHandleRecCardWrapper:(id)arg1;
+ (_Bool)canHandleMissedSubsRecCard:(id)arg1;
+ (_Bool)shouldCheckSubscriptionByRecWrapper:(id)arg1;
+ (_Bool)canHandleRecArticleCard:(id)arg1;
+ (_Bool)canHandleRecCard:(id)arg1;
+ (unsigned int)getMainSessionMediaTypeFromRecCardWrapper:(id)arg1;
+ (unsigned int)getMainSessionMediaTypeFromMsg:(id)arg1;
+ (id)getMainSessionTitleFromRecCardWrapper:(id)arg1;
+ (id)getMainSessionTitleFromMsg:(id)arg1;
+ (id)getCardIdFromRecCardWrapper:(id)arg1;
+ (unsigned int)getCardTypeWithRecoFlowStyle:(unsigned int)arg1;
+ (unsigned int)getCardTypeWithStyle:(unsigned int)arg1;
+ (unsigned int)getCardTypeWithRecCanvasCard;
+ (unsigned int)getCardTypeWithAdCanvasCard;
+ (unsigned int)getCardTypeWithRecCardWrapper:(id)arg1;
+ (unsigned int)maxVisibleAppMsgCountPerAccount:(unsigned int)arg1;
+ (unsigned int)maxVisibleAccountCount:(unsigned int)arg1;
+ (_Bool)needShowAllCellView:(unsigned int)arg1;
+ (_Bool)isMissedSubsCardWithStyle:(unsigned int)arg1;
+ (_Bool)isFinderCardWithStyle:(unsigned int)arg1;
+ (_Bool)isArticleStyleCardWithStyle:(unsigned int)arg1;

@end

