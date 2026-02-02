//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AlertPrivacyInfo, BaseResponse, JSAPIBaseResponse, NSMutableArray, NSString, UserPrivacyProtectInfo;

@interface JSAuthorizeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *allowWording; // @dynamic allowWording;
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *applyWording; // @dynamic applyWording;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cancelWording; // @dynamic cancelWording;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(retain, nonatomic) NSString *jsapiScope; // @dynamic jsapiScope;
@property(retain, nonatomic) AlertPrivacyInfo *privacyInfo; // @dynamic privacyInfo;
@property(retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo; // @dynamic privacyProtectInfo;
@property(retain, nonatomic) NSMutableArray *riskInfo; // @dynamic riskInfo;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;

@end

