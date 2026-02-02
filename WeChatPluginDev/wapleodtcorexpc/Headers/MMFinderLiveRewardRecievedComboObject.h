//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSMutableArray, NSString;

@interface MMFinderLiveRewardRecievedComboObject : NSObject
{
    _Bool _isTopestPriority;
    unsigned int _closeWaitBeginTime;
    unsigned int _lastDisplayGiftCount;
    MMFinderLiveTaskId *_taskId;
    NSString *_rewardUserName;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSMutableArray *_rewardRecievedAppMsgInfoQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTopestPriority; // @synthesize isTopestPriority=_isTopestPriority;
@property(nonatomic) unsigned int lastDisplayGiftCount; // @synthesize lastDisplayGiftCount=_lastDisplayGiftCount;
@property(nonatomic) unsigned int closeWaitBeginTime; // @synthesize closeWaitBeginTime=_closeWaitBeginTime;
@property(retain, nonatomic) NSMutableArray *rewardRecievedAppMsgInfoQueue; // @synthesize rewardRecievedAppMsgInfoQueue=_rewardRecievedAppMsgInfoQueue;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(retain, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(retain, nonatomic) NSString *rewardUserName; // @synthesize rewardUserName=_rewardUserName;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)addRewardAppMsgInfo:(id)arg1;
- (id)initWithLiveTaskId:(id)arg1 firstRewardAppMsgInfo:(id)arg2;

@end

