//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSMutableDictionary, NSString, QDataCacheWorldMap;

@interface QWorldTileOverlayDataProvider : NSObject
{
    NSString *_styleId;
    NSString *_scene;
    NSString *_version;
    NSString *_urlTemplate;
    NSCache *_memoryCache;
    QDataCacheWorldMap *_dataCache;
    NSArray *_langCandidates;
    NSMutableDictionary *_downloadingTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
@property(retain, nonatomic) NSArray *langCandidates; // @synthesize langCandidates=_langCandidates;
@property(retain, nonatomic) QDataCacheWorldMap *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(copy, nonatomic) NSString *urlTemplate; // @synthesize urlTemplate=_urlTemplate;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
- (void)onStyleChanged:(unsigned long long)arg1;
- (id)getDownloadTaskForTilePath:(const CDStruct_7e23819f *)arg1;
- (void)removeDownloadTaskForTilePath:(const CDStruct_7e23819f *)arg1;
- (void)setDownloadTask:(id)arg1 forTilePath:(const CDStruct_7e23819f *)arg2;
- (id)generateUrl:(id)arg1;
- (void)resetDataWithConfig:(id)arg1;
- (int)tileType;
- (id)keyForTilePath:(const CDStruct_7e23819f *)arg1;
- (CDStruct_f583c974)tileForPath:(CDStruct_7e23819f)arg1;
- (void)saveTileData:(id)arg1 atPath:(CDStruct_7e23819f)arg2;
- (id)loadTileImageAtPath:(CDStruct_7e23819f)arg1;
- (void)downloadTileImageAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)languageString:(long long)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

