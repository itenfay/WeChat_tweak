//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (MMNetworkHook)
+ (id)mmNetworkHook_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (void)hook;
+ (void)initialize;
- (id)mmDownloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDownloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mmDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

