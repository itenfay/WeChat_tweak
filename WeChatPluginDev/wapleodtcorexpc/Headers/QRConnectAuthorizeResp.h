//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, OauthWordingInfo;

@interface QRConnectAuthorizeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(nonatomic) unsigned int avatarLimit; // @dynamic avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @dynamic avatarList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int defaultAvatarId; // @dynamic defaultAvatarId;
@property(retain, nonatomic) NSString *defaultHeadimgFileid; // @dynamic defaultHeadimgFileid;
@property(retain, nonatomic) NSString *defaultHeadimgUrl; // @dynamic defaultHeadimgUrl;
@property(retain, nonatomic) NSData *faceVerifyReqBuffer; // @dynamic faceVerifyReqBuffer;
@property(nonatomic) _Bool isBanModifyAvatar; // @dynamic isBanModifyAvatar;
@property(nonatomic) _Bool isReturnH5; // @dynamic isReturnH5;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
@property(retain, nonatomic) OauthWordingInfo *wordingInfo; // @dynamic wordingInfo;

@end

