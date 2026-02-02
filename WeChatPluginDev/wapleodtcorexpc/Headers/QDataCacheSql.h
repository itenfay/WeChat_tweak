//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QDBDatabase, QDataStoreSelectorBingWorldmap, QDataStoreSelectorCustomWorldmap, QDataStoreSelectorHandDrawMap, QDataStoreSelectorWorldmap, QDataStoreSelectorWorldmapDark;

@interface QDataCacheSql : NSObject
{
    QDataStoreSelectorWorldmap *_worldmapNormal;
    QDataStoreSelectorWorldmapDark *_worldmapDark;
    QDataStoreSelectorHandDrawMap *_handDrawMap;
    QDataStoreSelectorBingWorldmap *_bingmap;
    QDataStoreSelectorCustomWorldmap *_customWorldmap;
    NSString *_dbpath;
    QDBDatabase *_db;
}

+ (id)singlton;
- (void).cxx_destruct;
@property(retain, nonatomic) QDBDatabase *db; // @synthesize db=_db;
@property(retain, nonatomic) NSString *dbpath; // @synthesize dbpath=_dbpath;
@property(retain, nonatomic) QDataStoreSelectorCustomWorldmap *customWorldmap; // @synthesize customWorldmap=_customWorldmap;
@property(retain, nonatomic) QDataStoreSelectorBingWorldmap *bingmap; // @synthesize bingmap=_bingmap;
@property(retain, nonatomic) QDataStoreSelectorHandDrawMap *handDrawMap; // @synthesize handDrawMap=_handDrawMap;
@property(retain, nonatomic) QDataStoreSelectorWorldmapDark *worldmapDark; // @synthesize worldmapDark=_worldmapDark;
@property(retain, nonatomic) QDataStoreSelectorWorldmap *worldmapNormal; // @synthesize worldmapNormal=_worldmapNormal;
- (_Bool)executeInsert:(id)arg1;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeQuery:(id)arg1;
- (void)resetHandDrawMapData;
- (void)resetWorldMapDataForType:(int)arg1;
- (void)resetMapDataForSelector:(id)arg1;
- (id)encryptItem:(id)arg1;
- (id)decryptItem:(id)arg1;
- (id)selectorForSourceType:(int)arg1;
- (void)close;
- (void)open;
- (void)initTableWithName:(id)arg1;
- (void)initData;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

