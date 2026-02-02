//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface FBSDKProfile : NSObject
{
    NSString *_userID;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_name;
    NSURL *_linkURL;
    NSDate *_refreshDate;
}

+ (void)observeChangeAccessTokenChange:(id)arg1;
+ (void)loadProfileWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)loadCurrentProfileWithCompletion:(CDUnknownBlockType)arg1;
+ (void)enableUpdatesOnAccessTokenChange:(_Bool)arg1;
+ (void)setCurrentProfile:(id)arg1;
+ (id)currentProfile;
+ (id)fetchCachedProfile;
+ (void)cacheProfile:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;
@property(readonly, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToProfile:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageURLForPictureMode:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)initWithUserID:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 name:(id)arg5 linkURL:(id)arg6 refreshDate:(id)arg7;

@end

