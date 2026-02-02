//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QDataCacheHandDrawMap;

@interface QHandDrawTileOverlayDataProvider : NSObject
{
    NSString *_version;
    QDataCacheHandDrawMap *_dataCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QDataCacheHandDrawMap *dataCache; // @synthesize dataCache=_dataCache;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)resetData;
- (int)tileType;
- (CDStruct_f583c974)tileForPath:(CDStruct_7e23819f)arg1;
- (void)saveTileData:(id)arg1 atPath:(CDStruct_7e23819f)arg2;
- (id)loadTileImageAtPath:(CDStruct_7e23819f)arg1;
- (id)URLForTilePath:(CDStruct_7e23819f)arg1;
- (id)init;

@end

