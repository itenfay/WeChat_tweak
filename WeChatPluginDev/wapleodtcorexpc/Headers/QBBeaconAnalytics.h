//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, QBBeaconLocalStrategy;

@interface QBBeaconAnalytics : NSObject
{
    _Bool analyticsEnabled;
    QBBeaconLocalStrategy *localStrategy;
    NSMutableArray *anaModules;
    int workType;
    int status;
    _Bool hasLocalDB;
    _Bool hasSyncServer;
    int serverSyncDelay;
    long long currentStatus;
}

+ (id)getDefualtAnalytics;
@property(nonatomic) long long currentStatus; // @synthesize currentStatus;
@property(nonatomic) int workType; // @synthesize workType;
@property(retain, nonatomic) NSMutableArray *anaModules; // @synthesize anaModules;
@property(retain) QBBeaconLocalStrategy *localStrategy; // @synthesize localStrategy;
@property(nonatomic) _Bool hasSyncServer; // @synthesize hasSyncServer;
@property(nonatomic) _Bool hasLocalDB; // @synthesize hasLocalDB;
@property(nonatomic) int serverSyncDelay; // @synthesize serverSyncDelay;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled;
- (void).cxx_destruct;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (void)setAesKeyEncrypt:(id)arg1;
- (id)aesKeyEncrypt;
- (void)setAesKey:(id)arg1;
- (id)aesKey;
- (void)reachabilityChanged:(id)arg1;
- (void)appEnterBackground;
- (void)appResumed;
- (_Bool)isBackground;
- (void)registObserver;
- (void)apnEventNotifyListen;
- (_Bool)fetchCommonStrategyFormDB;
- (void)asyncStrategyQuery;
- (void)initStrategyConfig;
- (_Bool)initLocalService;
- (_Bool)enableAnlytics:(int)arg1 uin:(id)arg2 gatewayIP:(id)arg3;
- (id)init;

@end

