//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMembershipFollowInfo : NSObject
{
    NSString *_username;
    unsigned long long _membershipStatus;
    unsigned long long _visitorStatus;
    unsigned long long _validTime;
    unsigned long long _leftDay;
    unsigned long long _cacheTime;
    unsigned long long _subscriptionType;
    unsigned long long _isCancel;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_isCancel;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)isCancel;
+ (id)swift_subscriptionType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)subscriptionType;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_leftDay;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)leftDay;
+ (id)swift_validTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)validTime;
+ (id)swift_visitorStatus;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)visitorStatus;
+ (id)swift_membershipStatus;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)membershipStatus;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long leftDay; // @synthesize leftDay=_leftDay;
@property(nonatomic) unsigned long long validTime; // @synthesize validTime=_validTime;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(nonatomic) unsigned long long membershipStatus; // @synthesize membershipStatus=_membershipStatus;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithFetchFinderMemberStatusResponse:(id)arg1 username:(id)arg2;

@end

