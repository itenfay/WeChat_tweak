//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCContactCacheOptimizeFeature;

@interface WCContactCacheOptimizeInfo : NSObject
{
    unsigned int _lastCalculateBestLoadTime;
    unsigned int _lastRecordCacheOptimizeInfoToDBTime;
    float _bestLoadlistScale;
    unsigned int _allChatRoomStrangerCount;
    unsigned int _firstRecordCacheOptimizeInfoTime;
    NSMutableArray *_bestLoadArrUserName;
    WCContactCacheOptimizeFeature *_currentStrategyFeature;
    WCContactCacheOptimizeFeature *_onlineSearchMaxGroupFeature;
}

+ (void)initialize;
+ (void)PBArrayAdd_firstRecordCacheOptimizeInfoTime;
+ (void)PBArrayAdd_allChatRoomStrangerCount;
+ (void)PBArrayAdd_bestLoadlistScale;
+ (void)PBArrayAdd_onlineSearchMaxGroupFeature;
+ (void)PBArrayAdd_currentStrategyFeature;
+ (void)PBArrayAdd_lastRecordCacheOptimizeInfoToDBTime;
+ (void)PBArrayAdd_bestLoadArrUserName;
+ (void)PBArrayAdd_lastCalculateBestLoadTime;
- (void).cxx_destruct;
@property(nonatomic) unsigned int firstRecordCacheOptimizeInfoTime; // @synthesize firstRecordCacheOptimizeInfoTime=_firstRecordCacheOptimizeInfoTime;
@property(nonatomic) unsigned int allChatRoomStrangerCount; // @synthesize allChatRoomStrangerCount=_allChatRoomStrangerCount;
@property(nonatomic) float bestLoadlistScale; // @synthesize bestLoadlistScale=_bestLoadlistScale;
@property(retain, nonatomic) WCContactCacheOptimizeFeature *onlineSearchMaxGroupFeature; // @synthesize onlineSearchMaxGroupFeature=_onlineSearchMaxGroupFeature;
@property(retain, nonatomic) WCContactCacheOptimizeFeature *currentStrategyFeature; // @synthesize currentStrategyFeature=_currentStrategyFeature;
@property(nonatomic) unsigned int lastRecordCacheOptimizeInfoToDBTime; // @synthesize lastRecordCacheOptimizeInfoToDBTime=_lastRecordCacheOptimizeInfoToDBTime;
@property(retain, nonatomic) NSMutableArray *bestLoadArrUserName; // @synthesize bestLoadArrUserName=_bestLoadArrUserName;
@property(nonatomic) unsigned int lastCalculateBestLoadTime; // @synthesize lastCalculateBestLoadTime=_lastCalculateBestLoadTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

