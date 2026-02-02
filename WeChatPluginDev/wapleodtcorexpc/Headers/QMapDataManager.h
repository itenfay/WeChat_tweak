//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QMapContext, QTileDataDownloader, QUniversalMapCounter;
@protocol QMapDataDelegate;

@interface QMapDataManager : NSObject
{
    _Bool _toCheckOfflineMapFolder;
    QMapContext *_mapContext;
    id <QMapDataDelegate> _delegate;
    QUniversalMapCounter *_universalMapCounter;
    QTileDataDownloader *_tileDownloader;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
    NSString *_cacheFolder;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool toCheckOfflineMapFolder; // @synthesize toCheckOfflineMapFolder=_toCheckOfflineMapFolder;
@property(copy, nonatomic) NSString *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(retain, nonatomic) QTileDataDownloader *tileDownloader; // @synthesize tileDownloader=_tileDownloader;
@property(nonatomic) __weak QUniversalMapCounter *universalMapCounter; // @synthesize universalMapCounter=_universalMapCounter;
@property(nonatomic) __weak id <QMapDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (void)recordOfflineMapCount;
- (void)copyOfflineMapLocalResource;
- (void)clearOfflineMapResource:(id)arg1;
- (void)copyOfflineMapResource:(id)arg1;
- (void)saveTileData:(id)arg1 withUrl:(id)arg2;
- (void)notifyDidFailLoadingWithError:(id)arg1;
- (void)downloadTile:(id)arg1;
- (void)cancelDownloadTile:(id)arg1;
- (void)clearOutdatedCache;
- (void)findAndDeleteOutdatedCache:(id)arg1;
- (void)reloadConfig;
- (void)dealloc;
- (id)initWithMapContext:(id)arg1;

@end

