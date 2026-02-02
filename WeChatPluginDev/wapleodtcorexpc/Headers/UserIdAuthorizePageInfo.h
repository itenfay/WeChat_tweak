//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AuthorizeInfoWithPhone, NSMutableArray, NSString, UserIdAuthorizePageJumpItem, VerifyWxPayReqInfo;

@interface UserIdAuthorizePageInfo
{
    _Bool _authChecked;
    _Bool _showPrivacyInfo;
    NSString *_appid;
    NSString *_title;
    NSString *_appIconUrl;
    NSString *_appName;
    NSString *_authWording;
    NSMutableArray *_userIdList;
    NSString *_businessWording;
    NSString *_confirmWording;
    UserIdAuthorizePageJumpItem *_protocolJump;
    NSMutableArray *_jumpItemList;
    NSString *_ticket;
    VerifyWxPayReqInfo *_verifyPayReq;
    NSString *_protocolPrefix;
    NSMutableArray *_userIdListNew;
    AuthorizeInfoWithPhone *_authorizeInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showPrivacyInfo; // @synthesize showPrivacyInfo=_showPrivacyInfo;
@property(retain, nonatomic) AuthorizeInfoWithPhone *authorizeInfo; // @synthesize authorizeInfo=_authorizeInfo;
@property(retain, nonatomic) NSMutableArray *userIdListNew; // @synthesize userIdListNew=_userIdListNew;
@property(copy, nonatomic) NSString *protocolPrefix; // @synthesize protocolPrefix=_protocolPrefix;
@property(nonatomic) _Bool authChecked; // @synthesize authChecked=_authChecked;
@property(retain, nonatomic) VerifyWxPayReqInfo *verifyPayReq; // @synthesize verifyPayReq=_verifyPayReq;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSMutableArray *jumpItemList; // @synthesize jumpItemList=_jumpItemList;
@property(retain, nonatomic) UserIdAuthorizePageJumpItem *protocolJump; // @synthesize protocolJump=_protocolJump;
@property(copy, nonatomic) NSString *confirmWording; // @synthesize confirmWording=_confirmWording;
@property(copy, nonatomic) NSString *businessWording; // @synthesize businessWording=_businessWording;
@property(retain, nonatomic) NSMutableArray *userIdList; // @synthesize userIdList=_userIdList;
@property(copy, nonatomic) NSString *authWording; // @synthesize authWording=_authWording;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

