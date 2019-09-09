//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IWAMsgNodeResourceMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class MemoryMappedKV, NSMutableArray, NSMutableDictionary;

@interface WAMsgNodePkgPreloadLogic : NSObject <PBMessageObserverDelegate, IWAMsgNodeResourceMgrExt>
{
    MemoryMappedKV *_mappedKV;
    NSMutableArray *_arrRequestAppInfo;
    NSMutableArray *_arrQueueAppInfo;
    NSMutableDictionary *_dicRequestUrl2StartTime;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *arrQueueAppInfo; // @synthesize arrQueueAppInfo=_arrQueueAppInfo;
@property(retain, nonatomic) NSMutableArray *arrRequestAppInfo; // @synthesize arrRequestAppInfo=_arrRequestAppInfo;
- (_Bool)canRestorePreloadWidget;
- (void)clearCacheAppInfoArray;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicRequestUrl2StartTime; // @synthesize dicRequestUrl2StartTime=_dicRequestUrl2StartTime;
- (long long)getReqTimeInterval;
- (_Bool)isAppInfoValid:(id)arg1;
- (_Bool)isMatchCommonContidtion;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (_Bool)needReqPreloadWidgetInfo;
- (void)notifyOnEnterForeground;
- (void)onPkgDownload:(id)arg1 appId:(id)arg2 debugMode:(unsigned int)arg3 version:(unsigned long long)arg4 errCode:(int)arg5 scene:(unsigned int)arg6 dataSize:(unsigned int)arg7;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)reloadData;
- (void)tryContinueQueue;

@end
