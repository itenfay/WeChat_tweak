//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLCache;

@interface FBSDKImageDownloader : NSObject
{
    NSURLCache *_urlCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)arg1 ttl:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAll;
- (id)init;

@end

