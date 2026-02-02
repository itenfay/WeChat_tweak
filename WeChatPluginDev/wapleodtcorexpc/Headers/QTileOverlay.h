//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSString, QMediator, QTileDataDownloader;

@interface QTileOverlay : NSObject
{
    CDStruct_02837cd9 _boundingRect;
    _Bool _isHighResoultionTile;
    _Bool _enableReuseOnMultiLevel;
    int _tileOverlayID;
    int _maxDataLevel;
    int _minDataLevel;
    NSString *_URLTemplate;
    NSString *_tileCacheDir;
    QMediator *_mediator;
    NSString *_tileSavePath;
    NSCache *_tileCache;
    QTileDataDownloader *_tileDownloader;
    NSMutableDictionary *_downloadingTasks;
    long long _LevelsOfReuse;
}

+ (id)getTileOverlayCachePath;
- (void).cxx_destruct;
@property(nonatomic) long long LevelsOfReuse; // @synthesize LevelsOfReuse=_LevelsOfReuse;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
@property(retain, nonatomic) QTileDataDownloader *tileDownloader; // @synthesize tileDownloader=_tileDownloader;
@property(retain, nonatomic) NSCache *tileCache; // @synthesize tileCache=_tileCache;
@property(nonatomic) int minDataLevel; // @synthesize minDataLevel=_minDataLevel;
@property(nonatomic) int maxDataLevel; // @synthesize maxDataLevel=_maxDataLevel;
@property(nonatomic) int tileOverlayID; // @synthesize tileOverlayID=_tileOverlayID;
@property(copy, nonatomic) NSString *tileSavePath; // @synthesize tileSavePath=_tileSavePath;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
@property(nonatomic) _Bool enableReuseOnMultiLevel; // @synthesize enableReuseOnMultiLevel=_enableReuseOnMultiLevel;
@property(retain, nonatomic) NSString *tileCacheDir; // @synthesize tileCacheDir=_tileCacheDir;
@property(nonatomic) _Bool isHighResoultionTile; // @synthesize isHighResoultionTile=_isHighResoultionTile;
@property(copy, nonatomic) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
- (_Bool)writeToDiskCache:(id)arg1 tileKey:(id)arg2;
- (void)onDownloadFail:(id)arg1 path:(const CDStruct_7e23819f *)arg2 callback:(CDUnknownBlockType)arg3 task:(id)arg4 tileKey:(id)arg5;
- (void)onDownloadSuccess:(id)arg1 path:(const CDStruct_7e23819f *)arg2 callback:(CDUnknownBlockType)arg3 task:(id)arg4 tileKey:(id)arg5;
- (id)fakeUrlForPath:(CDStruct_7e23819f)arg1;
- (id)loadTileCacheDataAtPath:(CDStruct_7e23819f)arg1;
- (void)onReceivedCacheVersion:(id)arg1;
- (void)removeMemoryCache;
- (void)removerTileOverlayCache;
- (_Bool)shouldRemoverTileOverlayCache;
- (void)removeDownloadTaskForTilePath:(const CDStruct_7e23819f *)arg1;
- (void)setDownloadTask:(id)arg1 forTilePath:(const CDStruct_7e23819f *)arg2;
- (id)getDownloadTaskForTilePath:(const CDStruct_7e23819f *)arg1;
- (id)keyForTilePath:(const CDStruct_7e23819f *)arg1;
- (void)sendCancelLoadOfTileAtPath:(CDStruct_7e23819f)arg1;
- (void)sendLoadTileAtPath:(CDStruct_7e23819f)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (id)initWithURLTemplate:(id)arg1;
- (id)init;
- (void)setup;
- (void)cancelLoadOfTileAtPath:(CDStruct_7e23819f)arg1;
- (void)loadTileAtPath:(CDStruct_7e23819f)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

