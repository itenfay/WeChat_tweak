//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AlertPrivacyInfo, BaseResponse, JSAPIBaseResponse, JSOperateWxDataResponse_DebugInfo, NSData, NSString, ScopeInfo, UserAvatarInfo, UserPrivacyProtectInfo;

@interface JSOperateWxDataResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *allowWording; // @dynamic allowWording;
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *applyWording; // @dynamic applyWording;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) UserAvatarInfo *avatarInfo; // @dynamic avatarInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cancelWording; // @dynamic cancelWording;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) JSOperateWxDataResponse_DebugInfo *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(nonatomic) _Bool needHoldLongconn; // @dynamic needHoldLongconn;
@property(retain, nonatomic) AlertPrivacyInfo *privacyInfo; // @dynamic privacyInfo;
@property(retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo; // @dynamic privacyProtectInfo;
@property(retain, nonatomic) ScopeInfo *scope; // @dynamic scope;

@end

