//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WAMainListReporter
{
    long long _opType;
    long long _iconType;
    long long _stayDuration;
    long long _opLocation;
    NSString *_appUin;
    long long _appCount;
    long long _reportSessionId;
    NSMutableDictionary *_exposureItemMap;
    long long _vcDidShowTime;
}

+ (id)createWithOperateType:(long long)arg1 sessionId:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long vcDidShowTime; // @synthesize vcDidShowTime=_vcDidShowTime;
@property(retain, nonatomic) NSMutableDictionary *exposureItemMap; // @synthesize exposureItemMap=_exposureItemMap;
@property(nonatomic) long long reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(readonly, nonatomic) long long appCount; // @synthesize appCount=_appCount;
@property(retain, nonatomic) NSString *appUin; // @synthesize appUin=_appUin;
@property(nonatomic) long long opLocation; // @synthesize opLocation=_opLocation;
@property(readonly, nonatomic) long long stayDuration; // @synthesize stayDuration=_stayDuration;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) long long opType; // @synthesize opType=_opType;
- (id)reportString;
- (int)reportID;
- (void)markDidExposureItemByAppId:(id)arg1;
- (void)markDidHiddenMainListVC;
- (void)markDidShowMainListVC;
- (void)report;

@end

