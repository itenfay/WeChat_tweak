//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface WCFinderLiveRewardPrepareParams : NSObject
{
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    unsigned int _scene;
    unsigned int _prepareRewardProductCount;
    NSString *_rewardFinderUsername;
    NSString *_incomeFinderUsername;
    NSData *_liveCookies;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_rewardProductId;
    unsigned long long _sceneFlag;
    NSArray *_attackFinderUsernameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attackFinderUsernameList; // @synthesize attackFinderUsernameList=_attackFinderUsernameList;
@property(nonatomic) unsigned long long sceneFlag; // @synthesize sceneFlag=_sceneFlag;
@property(nonatomic) unsigned int prepareRewardProductCount; // @synthesize prepareRewardProductCount=_prepareRewardProductCount;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(copy, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *incomeFinderUsername; // @synthesize incomeFinderUsername=_incomeFinderUsername;
@property(copy, nonatomic) NSString *rewardFinderUsername; // @synthesize rewardFinderUsername=_rewardFinderUsername;

@end

