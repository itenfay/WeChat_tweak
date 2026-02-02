//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAccessToken;

@interface FBSDKDeviceLoginManagerResult : NSObject
{
    _Bool _cancelled;
    FBSDKAccessToken *_accessToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FBSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithToken:(id)arg1 isCancelled:(_Bool)arg2;

@end

