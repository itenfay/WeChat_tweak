//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSSet, NSString;

@interface FBSDKLoginCompletionParameters : NSObject
{
    NSString *_accessTokenString;
    NSSet *_permissions;
    NSSet *_declinedPermissions;
    NSSet *_expiredPermissions;
    NSString *_appID;
    NSString *_userID;
    NSError *_error;
    NSDate *_expirationDate;
    NSDate *_dataAccessExpirationDate;
    NSString *_challenge;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSDate *dataAccessExpirationDate; // @synthesize dataAccessExpirationDate=_dataAccessExpirationDate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSSet *expiredPermissions; // @synthesize expiredPermissions=_expiredPermissions;
@property(copy, nonatomic) NSSet *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(copy, nonatomic) NSSet *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSString *accessTokenString; // @synthesize accessTokenString=_accessTokenString;
- (id)initWithError:(id)arg1;
- (id)init;

@end

