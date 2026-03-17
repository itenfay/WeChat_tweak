//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TBTrafficBlockData : NSObject
{
    int _level;
    int _blockId;
    unsigned int _timeStamp;
    int _dataType;
    unsigned int _crc;
    CDStruct_02837cd9 _mapRect;
}

@property(nonatomic) unsigned int crc; // @synthesize crc=_crc;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int blockId; // @synthesize blockId=_blockId;
@property(nonatomic) int level; // @synthesize level=_level;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

