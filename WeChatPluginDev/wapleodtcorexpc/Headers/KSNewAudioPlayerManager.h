//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSAudioPlayer, LZFileCacheManager;
@protocol KSAudioLogProtocol, OS_dispatch_queue;

@interface KSNewAudioPlayerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    void *_lzAudioMgrQueueKey;
    LZFileCacheManager *_fileCacheMgr;
    id <KSAudioLogProtocol> _logObj;
    KSAudioPlayer *_curAudioPlayer;
}

+ (id)cachePath;
+ (void)setCachePath:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak KSAudioPlayer *curAudioPlayer; // @synthesize curAudioPlayer=_curAudioPlayer;
@property(retain) id <KSAudioLogProtocol> logObj; // @synthesize logObj=_logObj;
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
- (void)setLogProtocol:(id)arg1;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)interruption:(id)arg1;
- (void)setupAudioSession;
- (id)localCachePath:(id)arg1;
- (_Bool)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(_Bool)arg4;
- (_Bool)isFileAlreadCachedByUrl:(id)arg1;
- (_Bool)isFileAlreadCachedByVid:(id)arg1;
- (_Bool)isFileAlreadCachedByVid:(id)arg1 fileExt:(id)arg2;
- (void)cleanCacheDir:(CDUnknownBlockType)arg1;
- (void)setDefaultCleanFilter:(CDUnknownBlockType)arg1;
- (id)curPlayer;
- (void *)contextKey;
- (id)createAudioPlayer:(id)arg1;
- (id)fileCacheMgr;
- (void)dealloc;
- (id)initInner;
- (id)init;

@end

