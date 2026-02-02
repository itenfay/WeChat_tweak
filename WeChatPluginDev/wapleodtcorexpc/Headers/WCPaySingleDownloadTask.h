//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURLSessionDownloadTask;

@interface WCPaySingleDownloadTask : NSObject
{
    _Bool _isDownloading;
    NSString *_downloadUrl;
    NSURLSessionDownloadTask *_urlSessionDownloadTask;
    NSString *_filePath;
    CDUnknownBlockType _completionBlock;
    id _extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSURLSessionDownloadTask *urlSessionDownloadTask; // @synthesize urlSessionDownloadTask=_urlSessionDownloadTask;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
- (id)initWithDownloadTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

