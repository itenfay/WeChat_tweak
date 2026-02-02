//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface QDataCacheItem : NSObject
{
    _Bool _shouldUpdateData;
    int _sourceType;
    NSData *_tileData;
    NSString *_cacheStyleid;
    NSString *_cacheVersion;
    NSString *_tileVersion;
    NSString *_tileSignature;
    CDStruct_f583c974 _tile;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tileSignature; // @synthesize tileSignature=_tileSignature;
@property(retain, nonatomic) NSString *tileVersion; // @synthesize tileVersion=_tileVersion;
@property(retain, nonatomic) NSString *cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(retain, nonatomic) NSString *cacheStyleid; // @synthesize cacheStyleid=_cacheStyleid;
@property(nonatomic) _Bool shouldUpdateData; // @synthesize shouldUpdateData=_shouldUpdateData;
@property(retain, nonatomic) NSData *tileData; // @synthesize tileData=_tileData;
@property(nonatomic) CDStruct_f583c974 tile; // @synthesize tile=_tile;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;

@end

