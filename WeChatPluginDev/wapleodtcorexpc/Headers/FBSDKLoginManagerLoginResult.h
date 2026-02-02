//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAccessToken, NSDictionary, NSMutableDictionary, NSSet;

@interface FBSDKLoginManagerLoginResult : NSObject
{
    NSMutableDictionary *_mutableLoggingExtras;
    _Bool _isCancelled;
    _Bool _isSkipped;
    FBSDKAccessToken *_token;
    NSSet *_grantedPermissions;
    NSSet *_declinedPermissions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSkipped; // @synthesize isSkipped=_isSkipped;
@property(copy, nonatomic) NSSet *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(copy, nonatomic) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) FBSDKAccessToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSDictionary *loggingExtras;
- (void)addLoggingExtra:(id)arg1 forKey:(id)arg2;
- (id)initWithToken:(id)arg1 isCancelled:(_Bool)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4;

@end

