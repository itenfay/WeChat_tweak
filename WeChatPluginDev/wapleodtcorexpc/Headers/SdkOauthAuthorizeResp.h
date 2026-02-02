//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, OauthWordingInfo;

@interface SdkOauthAuthorizeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(nonatomic) unsigned int avatarLimit; // @dynamic avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @dynamic avatarList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cloudGameScopeWording; // @dynamic cloudGameScopeWording;
@property(nonatomic) unsigned int defaultAvatarId; // @dynamic defaultAvatarId;
@property(retain, nonatomic) NSString *defaultHeadimgFileid; // @dynamic defaultHeadimgFileid;
@property(retain, nonatomic) NSString *defaultHeadimgUrl; // @dynamic defaultHeadimgUrl;
@property(retain, nonatomic) NSData *faceVerifyReqBuffer; // @dynamic faceVerifyReqBuffer;
@property(retain, nonatomic) NSData *gamecenterBuffer; // @dynamic gamecenterBuffer;
@property(retain, nonatomic) NSData *ilinkAuthBuffer; // @dynamic ilinkAuthBuffer;
@property(nonatomic) _Bool isBanModifyAvatar; // @dynamic isBanModifyAvatar;
@property(nonatomic) _Bool isCallServerWhenConfirm; // @dynamic isCallServerWhenConfirm;
@property(nonatomic) _Bool isHaveGamecenterPage; // @dynamic isHaveGamecenterPage;
@property(nonatomic) _Bool isRecentHasAuth; // @dynamic isRecentHasAuth;
@property(nonatomic) _Bool isSlienctAuth; // @dynamic isSlienctAuth;
@property(nonatomic) _Bool isUseNewpage; // @dynamic isUseNewpage;
@property(retain, nonatomic) NSData *oauthContextBuffer; // @dynamic oauthContextBuffer;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
@property(retain, nonatomic) NSString *userConfirmRedirectUrl; // @dynamic userConfirmRedirectUrl;
@property(retain, nonatomic) NSString *userConfirmWording; // @dynamic userConfirmWording;
@property(retain, nonatomic) OauthWordingInfo *wordingInfo; // @dynamic wordingInfo;
@property(retain, nonatomic) NSString *wxToken; // @dynamic wxToken;

@end

