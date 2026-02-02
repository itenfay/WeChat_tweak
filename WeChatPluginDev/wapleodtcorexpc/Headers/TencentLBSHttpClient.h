//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TencentLBSHttpClient : NSObject
{
}

+ (void)doPostForUrl:(id)arg1 data:(id)arg2 withMaxTimeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)configHttpClientWithCallbackQueue;

@end

