//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSMutableDictionary, NSString;

@interface WAPerformanceIndexObject
{
    _Bool _isGame;
    _Bool _shouldReport;
    unsigned int _appVersion;
    unsigned int _performanceIndexReportGap;
    NSString *_instanceId;
    NSString *_appid;
    NSString *_username;
    NSString *_nickname;
    NSString *_libStringVersion;
    NSMutableArray *_performanceIndexs;
    MMTimer *_timer;
    NSMutableDictionary *_sceneCountDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReport; // @synthesize shouldReport=_shouldReport;
@property(nonatomic) unsigned int performanceIndexReportGap; // @synthesize performanceIndexReportGap=_performanceIndexReportGap;
@property(retain, nonatomic) NSMutableDictionary *sceneCountDic; // @synthesize sceneCountDic=_sceneCountDic;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *performanceIndexs; // @synthesize performanceIndexs=_performanceIndexs;
@property(copy, nonatomic) NSString *libStringVersion; // @synthesize libStringVersion=_libStringVersion;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void)releaseTimer;
- (void)onTimer;
- (void)recordRegisteredIndexesInScene:(unsigned long long)arg1;
- (void)reportPerformanceIndexInScene:(unsigned long long)arg1;
- (void)taskDidDie;
- (void)taskDidEnterSuspend;
- (void)taskDidEnterForeground;
- (void)taskDidEnterBackground;
- (void)taskDidFinishColdLaunch;
- (void)createPerformanceIndexs:(id)arg1;
- (void)dealloc;
- (id)initWithPerformanceIndexs:(id)arg1 shouldReport:(_Bool)arg2;

@end

