//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString;

@interface FBSDKAccessToken : NSObject
{
    NSString *_appID;
    NSDate *_dataAccessExpirationDate;
    NSSet *_declinedPermissions;
    NSSet *_expiredPermissions;
    NSDate *_expirationDate;
    NSSet *_permissions;
    NSDate *_refreshDate;
    NSString *_tokenString;
    NSString *_userID;
}

+ (_Bool)supportsSecureCoding;
+ (void)refreshCurrentAccessToken:(CDUnknownBlockType)arg1;
+ (_Bool)isCurrentAccessTokenActive;
+ (void)setCurrentAccessToken:(id)arg1;
+ (id)currentAccessToken;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, copy, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, copy, nonatomic) NSSet *permissions; // @synthesize permissions=_permissions;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSSet *expiredPermissions; // @synthesize expiredPermissions=_expiredPermissions;
@property(readonly, copy, nonatomic) NSSet *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(readonly, copy, nonatomic) NSDate *dataAccessExpirationDate; // @synthesize dataAccessExpirationDate=_dataAccessExpirationDate;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAccessToken:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic, getter=isDataAccessExpired) _Bool dataAccessExpired;
- (_Bool)hasGranted:(id)arg1;
- (id)initWithTokenString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expiredPermissions:(id)arg4 appID:(id)arg5 userID:(id)arg6 expirationDate:(id)arg7 refreshDate:(id)arg8 dataAccessExpirationDate:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

