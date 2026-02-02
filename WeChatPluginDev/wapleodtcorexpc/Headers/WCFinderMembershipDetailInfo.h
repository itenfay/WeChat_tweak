//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderDataItem, WCFinderMemberCollectionInfo, WCFinderMemberStatisticalInfo, WCFinderMembershipAuthorMemberInfo, WCFinderMembershipVisitorMemberInfo, WCFinderMembershipVisitorNonMemberInfo;

@interface WCFinderMembershipDetailInfo : NSObject
{
    _Bool _autoRenewSwitch;
    _Bool _homePageSwitch;
    _Bool _isPreviewMode;
    unsigned int _visitorMemberBlockFlag;
    NSString *_username;
    unsigned long long _cacheTime;
    NSString *_zoneTitle;
    NSString *_zoneDesc;
    unsigned long long _membershipStatus;
    unsigned long long _visitorStatus;
    WCFinderMembershipVisitorMemberInfo *_visitorMemberInfo;
    WCFinderMembershipVisitorNonMemberInfo *_visitorNonMemberInfo;
    WCFinderMembershipAuthorMemberInfo *_authorMemberInfo;
    WCFinderMemberCollectionInfo *_memberCollectionInfo;
    unsigned long long _servicePrice;
    NSString *_nickname;
    WCFinderContact *_contact;
    WCFinderDataItem *_currentLiveObject;
    NSString *_memberBenefitsURL;
    NSString *_wecoinProductId;
    unsigned long long _autoServicePrice;
    unsigned long long _extFlag;
    WCFinderMemberStatisticalInfo *_statisticalInfo;
    unsigned long long _unsubscribeMsId;
}

+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_column_constraint_24:(void *)arg1;
+ (id)swift_visitorMemberBlockFlag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)visitorMemberBlockFlag;
+ (id)swift_isPreviewMode;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)isPreviewMode;
+ (id)swift_unsubscribeMsId;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)unsubscribeMsId;
+ (id)swift_homePageSwitch;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)homePageSwitch;
+ (id)swift_statisticalInfo;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)statisticalInfo;
+ (id)swift_memberCollectionInfo;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)memberCollectionInfo;
+ (id)swift_autoRenewSwitch;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)autoRenewSwitch;
+ (id)swift_extFlag;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)extFlag;
+ (id)swift_autoServicePrice;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)autoServicePrice;
+ (id)swift_wecoinProductId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)wecoinProductId;
+ (id)swift_memberBenefitsURL;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)memberBenefitsURL;
+ (id)swift_currentLiveObject;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)currentLiveObject;
+ (id)swift_contact;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)contact;
+ (id)swift_nickname;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)nickname;
+ (id)swift_servicePrice;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)servicePrice;
+ (id)swift_authorMemberInfo;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)authorMemberInfo;
+ (id)swift_visitorNonMemberInfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)visitorNonMemberInfo;
+ (id)swift_visitorMemberInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)visitorMemberInfo;
+ (id)swift_visitorStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)visitorStatus;
+ (id)swift_membershipStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)membershipStatus;
+ (id)swift_zoneDesc;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)zoneDesc;
+ (id)swift_zoneTitle;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)zoneTitle;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int visitorMemberBlockFlag; // @synthesize visitorMemberBlockFlag=_visitorMemberBlockFlag;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) unsigned long long unsubscribeMsId; // @synthesize unsubscribeMsId=_unsubscribeMsId;
@property(nonatomic) _Bool homePageSwitch; // @synthesize homePageSwitch=_homePageSwitch;
@property(retain, nonatomic) WCFinderMemberStatisticalInfo *statisticalInfo; // @synthesize statisticalInfo=_statisticalInfo;
@property(nonatomic) _Bool autoRenewSwitch; // @synthesize autoRenewSwitch=_autoRenewSwitch;
@property(nonatomic) unsigned long long extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned long long autoServicePrice; // @synthesize autoServicePrice=_autoServicePrice;
@property(copy, nonatomic) NSString *wecoinProductId; // @synthesize wecoinProductId=_wecoinProductId;
@property(copy, nonatomic) NSString *memberBenefitsURL; // @synthesize memberBenefitsURL=_memberBenefitsURL;
@property(retain, nonatomic) WCFinderDataItem *currentLiveObject; // @synthesize currentLiveObject=_currentLiveObject;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long servicePrice; // @synthesize servicePrice=_servicePrice;
@property(retain, nonatomic) WCFinderMemberCollectionInfo *memberCollectionInfo; // @synthesize memberCollectionInfo=_memberCollectionInfo;
@property(retain, nonatomic) WCFinderMembershipAuthorMemberInfo *authorMemberInfo; // @synthesize authorMemberInfo=_authorMemberInfo;
@property(retain, nonatomic) WCFinderMembershipVisitorNonMemberInfo *visitorNonMemberInfo; // @synthesize visitorNonMemberInfo=_visitorNonMemberInfo;
@property(retain, nonatomic) WCFinderMembershipVisitorMemberInfo *visitorMemberInfo; // @synthesize visitorMemberInfo=_visitorMemberInfo;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(nonatomic) unsigned long long membershipStatus; // @synthesize membershipStatus=_membershipStatus;
@property(copy, nonatomic) NSString *zoneDesc; // @synthesize zoneDesc=_zoneDesc;
@property(copy, nonatomic) NSString *zoneTitle; // @synthesize zoneTitle=_zoneTitle;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)initWithFinderMembershipDetailInfoResponse:(id)arg1;

@end

