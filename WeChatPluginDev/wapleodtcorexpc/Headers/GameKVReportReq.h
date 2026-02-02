//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GameKVReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *languageVer; // @dynamic languageVer;
@property(retain, nonatomic) NSString *logExt; // @dynamic logExt;
@property(nonatomic) unsigned int logId; // @dynamic logId;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;

@end

