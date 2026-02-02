//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLSession, NSURLSessionDataTask;
@protocol MVImageRequestDelegate;

@interface MVImageRequest
{
    _Bool _internalExecuting;
    _Bool _internalFinished;
    id <MVImageRequestDelegate> _delegate;
    NSString *_url;
    NSString *_token;
    unsigned long long _mode;
    NSURLSessionDataTask *_dataTask;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) _Bool internalFinished; // @synthesize internalFinished=_internalFinished;
@property(nonatomic) _Bool internalExecuting; // @synthesize internalExecuting=_internalExecuting;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MVImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLSession *urlSession;
- (void)loadLocalImageUrlString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeToCachePathWithImageData:(id)arg1 url:(id)arg2;
- (id)md5ForURL:(id)arg1;
- (id)cachePathForUrl:(id)arg1;
- (_Bool)isImageCached:(id)arg1;
- (id)loadCacheImageFromUrl:(id)arg1;
- (void)cancelCurrentLoadingRequest;
- (void)_downloadWithUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadWithUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadImageUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)asyncStart;
- (_Bool)isOnlineUrl:(id)arg1;
- (void)createCacheDirectoryIfNeeded;

@end

