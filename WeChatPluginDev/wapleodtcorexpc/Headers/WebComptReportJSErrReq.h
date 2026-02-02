//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface WebComptReportJSErrReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizMd5; // @dynamic bizMd5;
@property(retain, nonatomic) NSString *bizUrl; // @dynamic bizUrl;
@property(retain, nonatomic) NSString *comptName; // @dynamic comptName;
@property(nonatomic) unsigned int errCol; // @dynamic errCol;
@property(nonatomic) unsigned int errLine; // @dynamic errLine;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *errStack; // @dynamic errStack;
@property(retain, nonatomic) NSString *libVersion; // @dynamic libVersion;
@property(retain, nonatomic) NSString *refer; // @dynamic refer;
@property(retain, nonatomic) NSString *userAgent; // @dynamic userAgent;

@end

