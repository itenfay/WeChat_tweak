//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSSongInfo, LZDownloadTaskItem, LZFileCache, NSDictionary, NSError, NSString;
@protocol KSAudioDataProviderDelegate, OS_dispatch_queue;

@interface KSAudioDataProvider : NSObject
{
    LZFileCache *_fileCache;
    NSString *_filePath;
    KSSongInfo *_songInfo;
    LZDownloadTaskItem *_cacheItem;
    void *_context;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    id <KSAudioDataProviderDelegate> _delegate;
    NSDictionary *_providerWorkDetail;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *providerWorkDetail; // @synthesize providerWorkDetail=_providerWorkDetail;
@property(nonatomic) __weak id <KSAudioDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) LZFileCache *fileCache; // @synthesize fileCache=_fileCache;
@property(readonly, nonatomic) LZDownloadTaskItem *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(readonly, nonatomic) KSSongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void)prepareTailData:(struct _NSRange)arg1;
- (void)prepareSeekingData:(long long)arg1;
- (void)resumeDownloadData;
- (void)pauseDownloadData;
- (void)prepareBufferData;
- (_Bool)isDataCorruption:(id)arg1;
- (void)close:(_Bool)arg1;
- (_Bool)readFileDataInner:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (_Bool)canReadData:(long long)arg1 len:(long long)arg2 err:(id *)arg3;
- (long long)fileCachingLength:(long long *)arg1;
- (_Bool)prepareAudioData;
- (long long)readFileSize;
- (_Bool)readFileData:(long long)arg1 len:(long long)arg2 data:(id *)arg3 isEof:(_Bool *)arg4;
- (double)downloadSpeed;
- (id)audioFileTypes;
- (id)audioFileExtension;
- (_Bool)isReady;
- (void)dealloc;
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (id)init;

@end

