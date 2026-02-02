//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol FBSDKAppLinkResolving <NSObject>
- (void)appLinkFromURL:(NSURL *)arg1 handler:(void (^)(FBSDKAppLink *, NSError *))arg2;
@end

