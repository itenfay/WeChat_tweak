//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderAuthInfo : NSObject
{
    NSString *_realName;
    unsigned long long _authIconType;
    NSString *_authProfession;
    NSString *_unauthProfession;
    WCFinderContact *_authGuarantor;
    NSString *_detailLink;
    NSString *_appName;
    NSString *_authIconUrl;
    unsigned long long _authVerifyIdentity;
    unsigned long long _verifyStatus;
}

+ (id)genFromBizAuthInfo:(id)arg1;
+ (id)finderAuthInfo:(id)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_unauthProfession;
+ (void)PBArrayAdd_verifyStatus;
+ (void)PBArrayAdd_authVerifyIdentity;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authGuarantor;
+ (void)PBArrayAdd_authProfession;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_realName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long verifyStatus; // @synthesize verifyStatus=_verifyStatus;
@property(nonatomic) unsigned long long authVerifyIdentity; // @synthesize authVerifyIdentity=_authVerifyIdentity;
@property(copy, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *detailLink; // @synthesize detailLink=_detailLink;
@property(retain, nonatomic) WCFinderContact *authGuarantor; // @synthesize authGuarantor=_authGuarantor;
@property(retain, nonatomic) NSString *unauthProfession; // @synthesize unauthProfession=_unauthProfession;
@property(retain, nonatomic) NSString *authProfession; // @synthesize authProfession=_authProfession;
@property(nonatomic) unsigned long long authIconType; // @synthesize authIconType=_authIconType;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (id)displayText;
- (_Bool)shouldDisplay;
@property(readonly, copy) NSString *description;
- (_Bool)hasAuthIconUrl;
- (unsigned long long)authVerifyIdentityType;
- (id)genAuthIconUrl;
- (_Bool)hasGuarantor;
- (_Bool)hadCertified;
- (id)genFinderAuthInfo;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

