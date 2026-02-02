//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURLSessionDataTask;
@protocol MVImageLoaderDelegate;

@interface MVImageLoader : NSObject
{
    id <MVImageLoaderDelegate> _delegate;
    NSString *_loadingUrlString;
    CDUnknownBlockType _completion;
    NSURLSessionDataTask *_currentTask;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (id)md5ForURL:(id)arg1;
+ (void)saveCachedImageData:(id)arg1 onlineUrl:(id)arg2;
+ (id)cachePathForUrl:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSURLSessionDataTask *currentTask; // @synthesize currentTask=_currentTask;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *loadingUrlString; // @synthesize loadingUrlString=_loadingUrlString;
@property(nonatomic) __weak id <MVImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadLocalImageUrlString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isOnlineUrl:(id)arg1;
- (void)writeToCachePathWithImageData:(id)arg1 url:(id)arg2;
- (void)_downloadWithUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isImageCached:(id)arg1;
- (id)loadCacheImageFromUrl:(id)arg1;
- (void)downloadWithUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelCurrentLoadingRequest;
- (void)loadImageUrlString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageUrl:(id)arg1 token:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createCacheDirectoryIfNeeded;
- (id)init;

@end

