//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface AuthUserAutoFillInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSMutableArray *authInfoList; // @dynamic authInfoList;
@property(nonatomic) unsigned int authStatus; // @dynamic authStatus;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) _Bool userConfirm; // @dynamic userConfirm;

@end

