//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAUniversalAudioInfo, WAUniversalAudioPlayerCachePool;
@protocol OS_dispatch_queue, WAUniversalAudioLoaderDelegate;

@interface WAUniversalAudioLoader : NSObject
{
    _Bool _dataLoaded;
    _Bool _needsToSeek;
    id <WAUniversalAudioLoaderDelegate> _delegate;
    unsigned long long _strategy;
    WAUniversalAudioInfo *_audioInfo;
    NSObject<OS_dispatch_queue> *_audioQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    double _seekTimeRecord;
    WAUniversalAudioPlayerCachePool *_cachePool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAUniversalAudioPlayerCachePool *cachePool; // @synthesize cachePool=_cachePool;
@property(nonatomic) double seekTimeRecord; // @synthesize seekTimeRecord=_seekTimeRecord;
@property(nonatomic) _Bool needsToSeek; // @synthesize needsToSeek=_needsToSeek;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) WAUniversalAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(nonatomic) unsigned long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) __weak id <WAUniversalAudioLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
- (void)throwErrorWithTypeImplementation:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)throwErrorWithTypeImplementation:(unsigned long long)arg1;
- (void)throwErrorImplementation:(id)arg1;
- (id)generateSkippedPCMBufferImpelementationWith:(id)arg1 skipFrame:(long long)arg2 error:(id *)arg3;
- (void)seekToImplementation:(double)arg1;
- (void)loadDataFromCacheImplementation:(id)arg1 cache:(id)arg2;
- (void)readAudioFileFrom:(id)arg1 audioInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadDataFromDiskImplementation:(id)arg1 fileURL:(id)arg2;
- (void)writeDataToDisk:(id)arg1 path:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleDataDownloadFinished:(id)arg1 path:(id)arg2 audioInfo:(id)arg3;
- (void)loadImplementation:(id)arg1;
- (void)seekTo:(double)arg1;
- (void)loadWith:(id)arg1;
- (id)initWithAudioQueue:(id)arg1 cachePool:(id)arg2 fileQueue:(id)arg3;

@end

