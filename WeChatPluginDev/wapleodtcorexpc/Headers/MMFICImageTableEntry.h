//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFICImageTableEntry : NSObject
{
    void *_bytes;
    unsigned long long _entryLength;
    unsigned long long _imageLength;
    NSMutableArray *_deallocBlocks;
}

+ (unsigned long long)entryLengthWithImageLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long imageLength; // @synthesize imageLength=_imageLength;
- (_Bool)flush;
- (void)executeBlockOnDealloc:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithImageTableChunk:(id)arg1 bytes:(void *)arg2 entryLength:(unsigned long long)arg3 imageLength:(unsigned long long)arg4;
- (CDStruct_2c0d991e *)_metadata;
@property(nonatomic) CDStruct_bd2f613f sourceImageUUIDBytes;
@property(nonatomic) CDStruct_bd2f613f entityUUIDBytes;
@property(readonly, nonatomic) void *imageAddress;

@end

