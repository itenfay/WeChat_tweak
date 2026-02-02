//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FBSDKAccessToken;

@protocol FBSDKAccessTokenCaching <NSObject>
@property(copy, nonatomic) FBSDKAccessToken *accessToken;
- (void)clearCache;
@end

