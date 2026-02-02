//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface GetQRConnectCodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appdesc; // @dynamic appdesc;
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int lpInterval; // @dynamic lpInterval;
@property(nonatomic) unsigned int lpTimeout; // @dynamic lpTimeout;
@property(retain, nonatomic) NSData *qrcodeData; // @dynamic qrcodeData;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

