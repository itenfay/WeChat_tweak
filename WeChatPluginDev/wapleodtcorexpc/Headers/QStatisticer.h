//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, QAuthenStateError, TBIndoorUserBehaviourStat, TBPromoteIconBehaviourStat;

@interface QStatisticer : NSObject
{
    _Bool _loadSuccess;
    int _configUpdateFailCount;
    NSString *_tag;
    double _create;
    NSNumber *_loadSuccessTime;
    NSNumber *_firstLoadTime;
    long long _lastWorldTileCount;
    NSMutableDictionary *_root;
    NSMutableDictionary *_mapLoad;
    NSMutableDictionary *_configUpdate;
    NSMutableDictionary *_oversea;
    NSMutableDictionary *_ugc;
    NSMutableDictionary *_indoorLog;
    TBIndoorUserBehaviourStat *_indoorUserBehaviourStat;
    NSMutableDictionary *_darkMode;
    NSMutableDictionary *_pointEvent;
    NSMutableDictionary *_vectorHeat;
    NSMutableDictionary *_heatMap;
    NSMutableDictionary *_arcLine;
    NSMutableDictionary *_trail;
    NSMutableDictionary *_dotScatter;
    NSMutableDictionary *_bitmapScatter;
    NSMutableDictionary *_groundOverlay;
    NSMutableDictionary *_aoi;
    NSMutableDictionary *_customStyle;
    NSMutableDictionary *_offline;
    NSMutableDictionary *_promote;
    TBPromoteIconBehaviourStat *_promoteIconBehaviourStat;
    QAuthenStateError *_auth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QAuthenStateError *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) TBPromoteIconBehaviourStat *promoteIconBehaviourStat; // @synthesize promoteIconBehaviourStat=_promoteIconBehaviourStat;
@property(retain, nonatomic) NSMutableDictionary *promote; // @synthesize promote=_promote;
@property(retain, nonatomic) NSMutableDictionary *offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSMutableDictionary *customStyle; // @synthesize customStyle=_customStyle;
@property(retain, nonatomic) NSMutableDictionary *aoi; // @synthesize aoi=_aoi;
@property(retain, nonatomic) NSMutableDictionary *groundOverlay; // @synthesize groundOverlay=_groundOverlay;
@property(retain, nonatomic) NSMutableDictionary *bitmapScatter; // @synthesize bitmapScatter=_bitmapScatter;
@property(retain, nonatomic) NSMutableDictionary *dotScatter; // @synthesize dotScatter=_dotScatter;
@property(retain, nonatomic) NSMutableDictionary *trail; // @synthesize trail=_trail;
@property(retain, nonatomic) NSMutableDictionary *arcLine; // @synthesize arcLine=_arcLine;
@property(retain, nonatomic) NSMutableDictionary *heatMap; // @synthesize heatMap=_heatMap;
@property(retain, nonatomic) NSMutableDictionary *vectorHeat; // @synthesize vectorHeat=_vectorHeat;
@property(retain, nonatomic) NSMutableDictionary *pointEvent; // @synthesize pointEvent=_pointEvent;
@property(retain, nonatomic) NSMutableDictionary *darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) TBIndoorUserBehaviourStat *indoorUserBehaviourStat; // @synthesize indoorUserBehaviourStat=_indoorUserBehaviourStat;
@property(retain, nonatomic) NSMutableDictionary *indoorLog; // @synthesize indoorLog=_indoorLog;
@property(retain, nonatomic) NSMutableDictionary *ugc; // @synthesize ugc=_ugc;
@property(retain, nonatomic) NSMutableDictionary *oversea; // @synthesize oversea=_oversea;
@property(retain, nonatomic) NSMutableDictionary *configUpdate; // @synthesize configUpdate=_configUpdate;
@property(retain, nonatomic) NSMutableDictionary *mapLoad; // @synthesize mapLoad=_mapLoad;
@property(retain, nonatomic) NSMutableDictionary *root; // @synthesize root=_root;
@property(nonatomic) long long lastWorldTileCount; // @synthesize lastWorldTileCount=_lastWorldTileCount;
@property(nonatomic) int configUpdateFailCount; // @synthesize configUpdateFailCount=_configUpdateFailCount;
@property(retain, nonatomic) NSNumber *firstLoadTime; // @synthesize firstLoadTime=_firstLoadTime;
@property(retain, nonatomic) NSNumber *loadSuccessTime; // @synthesize loadSuccessTime=_loadSuccessTime;
@property(nonatomic) _Bool loadSuccess; // @synthesize loadSuccess=_loadSuccess;
@property(nonatomic) double create; // @synthesize create=_create;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void)finishRecord;
- (void)beginRecord;
- (id)relativeTime:(double)arg1;
- (id)currentRelativeTime;
- (void)appendUniqueInfo:(id)arg1 to:(id)arg2 forKey:(id)arg3 maxCount:(int)arg4 equalPredicator:(CDUnknownBlockType)arg5;
- (void)recordAuthenErrorCode:(int)arg1;
- (void)setUpIndoorLog;
- (id)getAllIndoorEvents;
- (void)recordIndoorEvent:(id)arg1 indoorInfo:(id)arg2;
- (void)recordOfflineMapCount:(id)arg1 value:(long long)arg2;
- (void)recordCustomStyleCount:(id)arg1 styleID:(id)arg2;
- (void)recordAoiLayerCount:(id)arg1 value:(long long)arg2;
- (void)recordGroundOverlayCount:(id)arg1 value:(long long)arg2;
- (void)recordScatterBitMapCount:(id)arg1 value:(long long)arg2;
- (void)recordDotScatterCount:(id)arg1 value:(long long)arg2;
- (void)recordTrailCount:(id)arg1 value:(long long)arg2;
- (void)recordarcLineCount:(id)arg1 value:(long long)arg2;
- (void)recordHeatMapCount:(id)arg1 value:(long long)arg2;
- (void)recordHoneyCombHeatCount:(id)arg1 value:(long long)arg2;
- (void)recordPointEventCount:(id)arg1 value:(long long)arg2;
- (void)recordDarkModeCount:(id)arg1 value:(long long)arg2;
- (void)recordCustomLayerEvent:(id)arg1 value:(long long)arg2;
- (void)setupLegacyOversea;
- (void)recordOverseaEvent:(id)arg1 value:(long long)arg2;
- (void)recordMaploadConfigError:(id)arg1 userInfo:(id)arg2;
- (void)recordMaploadTileError:(id)arg1;
- (id)addTimeForUserInfo:(id)arg1;
- (void)recordMapLoadConfigUpdate:(_Bool)arg1;
- (void)recordMapLoadCallbackEvent;
- (void)setSeneWithTag:(id)arg1;
- (void)dealloc;
- (id)init;

@end

