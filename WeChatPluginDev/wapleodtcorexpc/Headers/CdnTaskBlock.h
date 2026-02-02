//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnTaskBlock : NSObject
{
    struct C2CUploadRequest uploadRequest;
    struct C2CDownloadRequest downloadRequest;
    _Bool _isRetryTask;
    int _mode;
    NSString *_filekey;
    unsigned long long _downloadType;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _existOnSvrBlock;
    CDUnknownBlockType _uploadCompleteBlock;
    CDUnknownBlockType _moovReadyBlock;
    CDUnknownBlockType _m3u8ReadyBlock;
    CDUnknownBlockType _requestDataReadyCallback;
    CDUnknownBlockType _fastCompleteBlock;
    CDUnknownBlockType _downloadCompleteBlock;
    CDUnknownBlockType _preloadCompleteBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preloadCompleteBlock; // @synthesize preloadCompleteBlock=_preloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompleteBlock; // @synthesize downloadCompleteBlock=_downloadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType fastCompleteBlock; // @synthesize fastCompleteBlock=_fastCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType requestDataReadyCallback; // @synthesize requestDataReadyCallback=_requestDataReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType m3u8ReadyBlock; // @synthesize m3u8ReadyBlock=_m3u8ReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType moovReadyBlock; // @synthesize moovReadyBlock=_moovReadyBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadCompleteBlock; // @synthesize uploadCompleteBlock=_uploadCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType existOnSvrBlock; // @synthesize existOnSvrBlock=_existOnSvrBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isRetryTask; // @synthesize isRetryTask=_isRetryTask;
@property(retain, nonatomic) NSString *filekey; // @synthesize filekey=_filekey;

@end

