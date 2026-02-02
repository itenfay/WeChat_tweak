//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRewardSendUserInfo : NSObject
{
    _Bool _wecoinBalanceUpdated;
    MMFinderLiveRewardGiftItem *_giftItem;
    FinderLiveRewardGiftExtInfo *_rewardExtInfo;
    long long _currentBalance;
    unsigned long long _sourceSendMoreBubbleHost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sourceSendMoreBubbleHost; // @synthesize sourceSendMoreBubbleHost=_sourceSendMoreBubbleHost;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardExtInfo; // @synthesize rewardExtInfo=_rewardExtInfo;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;

@end

