//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCCdnServiceMgr <NSObject>
+ (void)NotifyBuffering:(NSString *)arg1 isBuffering:(_Bool)arg2;
+ (void)UpdatePlaybackTime:(NSString *)arg1 playTime:(double)arg2;
+ (_Bool)stopDownloadTaskWithFileKey:(NSString *)arg1 taskInfo:(id *)arg2;
+ (_Bool)stopDownloadTaskWithFileKey:(NSString *)arg1;
+ (int)requestVideoData:(NSString *)arg1 offset:(unsigned long long)arg2 length:(long long)arg3 bitrate:(int)arg4 dataReadyBlock:(void (^)(CdnComVideoProcessInfo *))arg5;
+ (void)setFastCompleteBlock:(NSString *)arg1 block:(void (^)(CdnDownloadTaskInfo *))arg2;
+ (unsigned long long)startDownloadWithType:(unsigned long long)arg1 downloadMode:(int)arg2 request:(struct C2CDownloadRequest (^)(void))arg3 progress:(void (^)(CdnProgressInfo *))arg4 m3u8Ready:(void (^)(CdnComVideoProcessInfo *))arg5 moovReady:(void (^)(CdnComVideoProcessInfo *))arg6 fastComplete:(void (^)(CdnDownloadTaskInfo *))arg7 complete:(void (^)(CdnDownloadTaskInfo *))arg8 preloadComplete:(void (^)(CdnPreloadEndInfo *))arg9;
+ (_Bool)startDownloadWithType:(unsigned long long)arg1 request:(struct C2CDownloadRequest (^)(void))arg2 progress:(void (^)(CdnProgressInfo *))arg3 complete:(void (^)(CdnDownloadTaskInfo *))arg4;
+ (_Bool)startDownloadTaskWithRequest:(struct C2CDownloadRequest (^)(void))arg1 progress:(void (^)(CdnProgressInfo *))arg2 complete:(void (^)(CdnDownloadTaskInfo *))arg3;
@end

