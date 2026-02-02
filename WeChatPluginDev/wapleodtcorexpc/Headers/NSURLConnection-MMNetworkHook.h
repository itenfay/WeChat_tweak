//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLConnection.h>

@interface NSURLConnection (MMNetworkHook)
+ (void)mmNetworkHook_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)mmNetworkHook_sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)initialize;
+ (void)hook;
- (id)mmNetworkHook_initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
- (id)mmNetworkHook_initWithRequest:(id)arg1 delegate:(id)arg2;
@end

