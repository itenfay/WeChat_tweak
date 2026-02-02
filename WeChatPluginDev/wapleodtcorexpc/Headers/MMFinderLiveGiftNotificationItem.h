//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftNotificationLayout, MMFinderLiveRewardAppMsgInfo, MMFinderLiveRewardGiftItem, NSArray, NSString;

@interface MMFinderLiveGiftNotificationItem : NSObject
{
    _Bool _sentByMe;
    _Bool _isBatchReward;
    unsigned int _giftCount;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_nickname;
    NSString *_avatarUri;
    NSArray *_badgeInfos;
    NSString *_comboId;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsgInfo;
    MMFinderLiveGiftNotificationLayout *_notificationLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftNotificationLayout *notificationLayout; // @synthesize notificationLayout=_notificationLayout;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo; // @synthesize rewardAppMsgInfo=_rewardAppMsgInfo;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;
@property(nonatomic) _Bool isBatchReward; // @synthesize isBatchReward=_isBatchReward;
@property(nonatomic) _Bool sentByMe; // @synthesize sentByMe=_sentByMe;
@property(nonatomic) unsigned int giftCount; // @synthesize giftCount=_giftCount;
@property(retain, nonatomic) NSArray *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(retain, nonatomic) NSString *avatarUri; // @synthesize avatarUri=_avatarUri;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(readonly, nonatomic) _Bool hasFullPagAnimation;
@property(readonly, nonatomic) NSString *fansGroupName;
@property(readonly, nonatomic) unsigned int fansGroupRank;
@property(readonly, nonatomic) unsigned int globalBadgeRank;
- (id)initWithGiftItem:(id)arg1 rewardAppMsgInfo:(id)arg2;

@end

