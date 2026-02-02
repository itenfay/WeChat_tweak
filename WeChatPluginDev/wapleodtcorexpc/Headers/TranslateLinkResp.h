//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString, SdkFinderInfoResult, TranslateLinkResp_ShareMsgInfo;

@interface TranslateLinkResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) NSString *appIconUrl; // @dynamic appIconUrl;
@property(retain, nonatomic) NSString *appNickname; // @dynamic appNickname;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *deeplink; // @dynamic deeplink;
@property(retain, nonatomic) NSString *errWording; // @dynamic errWording;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) SdkFinderInfoResult *finderInfoResult; // @dynamic finderInfoResult;
@property(retain, nonatomic) NSString *platformSignature; // @dynamic platformSignature;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sceneNote; // @dynamic sceneNote;
@property(retain, nonatomic) NSString *sdkToken; // @dynamic sdkToken;
@property(nonatomic) unsigned int shareChatScope; // @dynamic shareChatScope;
@property(retain, nonatomic) TranslateLinkResp_ShareMsgInfo *shareMsgInfo; // @dynamic shareMsgInfo;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(retain, nonatomic) NSData *wxaRuntimeBuff; // @dynamic wxaRuntimeBuff;

@end

