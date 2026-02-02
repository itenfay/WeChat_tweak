//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CommRequestSource, NSData, NSString, WxaClientPublicLibInfo;

@interface WxaAttrSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceRelease; // @dynamic deviceRelease;
@property(retain, nonatomic) NSString *instanceId; // @dynamic instanceId;
@property(retain, nonatomic) NSData *lastAttrVersion; // @dynamic lastAttrVersion;
@property(retain, nonatomic) WxaClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(nonatomic) int requestScene; // @dynamic requestScene;
@property(retain, nonatomic) CommRequestSource *requestSource; // @dynamic requestSource;
@property(retain, nonatomic) NSString *wxaAppId; // @dynamic wxaAppId;
@property(retain, nonatomic) NSString *wxaUserName; // @dynamic wxaUserName;

@end

