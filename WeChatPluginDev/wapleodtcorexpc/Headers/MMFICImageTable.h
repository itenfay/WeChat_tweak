//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FICImageTableMetadata, MMFICImageFormat, NSCountedSet, NSRecursiveLock, NSString;

@interface MMFICImageTable : NSObject
{
    NSRecursiveLock *_lock;
    MMFICImageFormat *_imageFormat;
    FICImageTableMetadata *_metaData;
    double _screenScale;
    unsigned long long _imageRowLength;
    struct CGColorSpace *_colorSpace;
    NSString *_filePath;
    int _fileDescriptor;
    long long _fileLength;
    unsigned int _entryCount;
    long long _entryLength;
    unsigned int _entriesPerChunk;
    long long _imageLength;
    unsigned long long _chunkLength;
    unsigned int _chunkCount;
    void *_chunkCache;
    NSCountedSet *_chunkSet;
    int tableUsedCount;
}

- (void).cxx_destruct;
@property(nonatomic) int tableUsedCount; // @synthesize tableUsedCount;
- (_Bool)canImageTableRemoveLocalCache;
- (void)cleanupFICImgInMemory;
- (void)reset;
- (id)_entryDataForEntityUUID:(id)arg1;
- (void)_entryWasDeallocatedFromChunk:(id)arg1;
- (id)_entryDataAtIndex:(unsigned long long)arg1;
- (void)_setEntryCount:(unsigned int)arg1;
- (id)_chunkAtIndex:(long long)arg1;
- (void)_setCachedChunk:(id)arg1 index:(long long)arg2;
- (id)_cachedChunkAtIndex:(long long)arg1;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (id)getImageForEntityUUID:(id)arg1 isNeedMemoryCache:(_Bool)arg2;
- (void)setEntryForEntityUUID:(id)arg1 imageDrawingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFormat:(id)arg1;
@property(readonly, copy, nonatomic) NSString *metadataFilePath;
@property(readonly, copy, nonatomic) NSString *tableFilePath;

@end

