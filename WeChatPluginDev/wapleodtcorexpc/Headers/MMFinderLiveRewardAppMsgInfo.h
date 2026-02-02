//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGestureInfo, FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem, NSArray, NSMutableArray, NSMutableSet, NSString, WCFinderContact;

@interface MMFinderLiveRewardAppMsgInfo : NSObject
{
    _Bool _isTopestPriority;
    _Bool _showAttackEffectUpgradeSubNotification;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    unsigned int _comboProductCount;
    unsigned int _extraPKValue;
    unsigned long long _appMsgSeq;
    unsigned long long _type;
    NSString *_rewardUserName;
    NSString *_rewardRecipientUserName;
    NSString *_rewardProductId;
    WCFinderContact *_fromContact;
    WCFinderContact *_toContact;
    NSString *_msgContent;
    NSArray *_fromUserBadgeInfos;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_comboId;
    FinderLiveRewardGiftExtInfo *_rewardGiftExtInfo;
    FinderLiveGestureInfo *_gestureInfo;
    NSMutableArray *_giftRandomItemList;
    double _taskedBonusMultiplier;
    NSArray *_attackGiftItemList;
    NSMutableSet *_downloadedAttackGiftItemAnimationIds;
    NSArray *_pkValueExtraItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pkValueExtraItem; // @synthesize pkValueExtraItem=_pkValueExtraItem;
@property(nonatomic) unsigned int extraPKValue; // @synthesize extraPKValue=_extraPKValue;
@property(nonatomic) _Bool showAttackEffectUpgradeSubNotification; // @synthesize showAttackEffectUpgradeSubNotification=_showAttackEffectUpgradeSubNotification;
@property(retain, nonatomic) NSMutableSet *downloadedAttackGiftItemAnimationIds; // @synthesize downloadedAttackGiftItemAnimationIds=_downloadedAttackGiftItemAnimationIds;
@property(retain, nonatomic) NSArray *attackGiftItemList; // @synthesize attackGiftItemList=_attackGiftItemList;
@property(nonatomic) double taskedBonusMultiplier; // @synthesize taskedBonusMultiplier=_taskedBonusMultiplier;
@property(nonatomic) _Bool isTopestPriority; // @synthesize isTopestPriority=_isTopestPriority;
@property(retain, nonatomic) NSMutableArray *giftRandomItemList; // @synthesize giftRandomItemList=_giftRandomItemList;
@property(retain, nonatomic) FinderLiveGestureInfo *gestureInfo; // @synthesize gestureInfo=_gestureInfo;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardGiftExtInfo; // @synthesize rewardGiftExtInfo=_rewardGiftExtInfo;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(nonatomic) unsigned int comboProductCount; // @synthesize comboProductCount=_comboProductCount;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) NSArray *fromUserBadgeInfos; // @synthesize fromUserBadgeInfos=_fromUserBadgeInfos;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(retain, nonatomic) WCFinderContact *toContact; // @synthesize toContact=_toContact;
@property(retain, nonatomic) WCFinderContact *fromContact; // @synthesize fromContact=_fromContact;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(retain, nonatomic) NSString *rewardRecipientUserName; // @synthesize rewardRecipientUserName=_rewardRecipientUserName;
@property(retain, nonatomic) NSString *rewardUserName; // @synthesize rewardUserName=_rewardUserName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long appMsgSeq; // @synthesize appMsgSeq=_appMsgSeq;
- (id)description;
- (_Bool)isAllResourceDownloaded;
@property(readonly, nonatomic) NSMutableSet *attackGiftItemAnimationIdSet;
@property(readonly, nonatomic) NSArray *attackFinderUsernameList;
- (_Bool)isGiftWallRewardMsg;
- (_Bool)isLocalNotifyBanner;
@property(readonly, nonatomic) unsigned int rewardGiftDropBatchSize;
@property(readonly, nonatomic) _Bool isBatchReward;
- (_Bool)isSentToMe;
- (_Bool)isSentByMe;
- (void)updateGiftAttackItemList:(id)arg1;
- (void)updatePKValueExtraItem:(id)arg1;
- (void)updateGiftRandomItemList:(id)arg1;
- (void)replaceGiftItem:(id)arg1;
- (id)genFakeComboIdForFreeGift;
- (void)copyFromRewardAppMsgInfo:(id)arg1;
- (id)initWithNotifyBannerRewardAppMsgInfo:(id)arg1 appMsgSeq:(unsigned long long)arg2 toContact:(id)arg3;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2 appMsgSeq:(unsigned long long)arg3 msgContent:(id)arg4 rewardProductId:(id)arg5 giftItem:(id)arg6 rewardProductCount:(unsigned int)arg7 rewardAmountInWecoin:(unsigned int)arg8 comboProductCount:(unsigned int)arg9 comboId:(id)arg10 fromUserBadgeInfos:(id)arg11 rewardGiftExtInfo:(id)arg12 gestureInfo:(id)arg13 giftRandomItemList:(id)arg14 type:(unsigned long long)arg15 taskedBonusMultiplier:(double)arg16 attackGiftItemList:(id)arg17;
- (id)initWithRewardAppMsgInfo:(id)arg1 appMsgSeq:(unsigned long long)arg2 fromFinderLiveContact:(id)arg3 toFinderLiveContact:(id)arg4;

@end

