//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CgiReportDataSender : NSObject
{
    _Bool _useMMKV;
    unsigned int _lastReadCacheFileTimeSec;
    NSMutableDictionary *_sendingMaps;
    unsigned long long _mmkvReportItemCount;
    NSMutableDictionary *_routerMap;
    unsigned long long _lastMMKVTrimTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReadCacheFileTimeSec; // @synthesize lastReadCacheFileTimeSec=_lastReadCacheFileTimeSec;
@property(nonatomic) unsigned long long lastMMKVTrimTimeMs; // @synthesize lastMMKVTrimTimeMs=_lastMMKVTrimTimeMs;
@property(nonatomic) _Bool useMMKV; // @synthesize useMMKV=_useMMKV;
@property(retain, nonatomic) NSMutableDictionary *routerMap; // @synthesize routerMap=_routerMap;
@property(nonatomic) unsigned long long mmkvReportItemCount; // @synthesize mmkvReportItemCount=_mmkvReportItemCount;
@property(retain, nonatomic) NSMutableDictionary *sendingMaps; // @synthesize sendingMaps=_sendingMaps;
- (id)readDataFromFile:(id *)arg1;
- (id)saveDataToFile:(id)arg1;
- (id)mmkvFileMapID;
- (id)mmCgiReportPath:(id)arg1;
- (void)checkMMKVSize;
- (void)readExptConfig;
- (void)onExptItemListChange;
- (id)createDefaultRouterInfo:(unsigned int)arg1;
- (id)getRouteInfo:(unsigned int)arg1;
- (id)mmkvMapID;
- (void)readMMKVCount;
- (void)removeFromMMKV:(id)arg1;
- (void)saveToMMKV:(id)arg1;
- (id)getReportDataFromMMKV;
- (_Bool)isSendingQueueFull;
- (void)sendSuccess:(id)arg1;
- (void)sendFail:(id)arg1;
- (void)onCgiTaskEnd:(int)arg1 andTask:(id)arg2;
- (void)checkToSend;
- (void)putToQueue:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onEnterForeground;
- (void)putCgiRouter:(unsigned int)arg1 andCmdId:(unsigned int)arg2 andTryCount:(unsigned int)arg3 andCgiPath:(id)arg4;
- (void)initDefaultConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

