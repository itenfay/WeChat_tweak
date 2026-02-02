//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftNotificationItem, MMFinderLiveGiftPlayItem, MMFinderLiveRewardAppMsgInfo, NSString;

@interface MMFinderLiveGiftComboItem : NSObject
{
    _Bool _isBatchFinished;
    _Bool _manualDelete;
    NSString *_comboId;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsgInfo;
    MMFinderLiveGiftNotificationItem *_notificationItem;
    MMFinderLiveGiftPlayItem *_playItem;
    long long _displayingSeconds;
    long long _totalPlayCount;
    long long _remainsPlayCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool manualDelete; // @synthesize manualDelete=_manualDelete;
@property(nonatomic) long long remainsPlayCount; // @synthesize remainsPlayCount=_remainsPlayCount;
@property(nonatomic) long long totalPlayCount; // @synthesize totalPlayCount=_totalPlayCount;
@property(nonatomic) long long displayingSeconds; // @synthesize displayingSeconds=_displayingSeconds;
@property(nonatomic) _Bool isBatchFinished; // @synthesize isBatchFinished=_isBatchFinished;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *playItem; // @synthesize playItem=_playItem;
@property(retain, nonatomic) MMFinderLiveGiftNotificationItem *notificationItem; // @synthesize notificationItem=_notificationItem;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo; // @synthesize rewardAppMsgInfo=_rewardAppMsgInfo;
@property(retain, nonatomic) NSString *comboId; // @synthesize comboId=_comboId;

@end

