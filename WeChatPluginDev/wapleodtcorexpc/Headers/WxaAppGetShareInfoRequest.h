//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ChatToolInfo, NSMutableArray, NSString, WxaAppmsgSignature3rd;

@interface WxaAppGetShareInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityInfo; // @dynamic activityInfo;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) ChatToolInfo *chatToolInfo; // @dynamic chatToolInfo;
@property(nonatomic) _Bool isChattoolmsg; // @dynamic isChattoolmsg;
@property(nonatomic) _Bool isSecretmsg; // @dynamic isSecretmsg;
@property(nonatomic) _Bool isTodomsg; // @dynamic isTodomsg;
@property(nonatomic) _Bool isUpdatablemsg; // @dynamic isUpdatablemsg;
@property(retain, nonatomic) NSMutableArray *shareName; // @dynamic shareName;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *todoActivityId; // @dynamic todoActivityId;
@property(retain, nonatomic) WxaAppmsgSignature3rd *wxaSignature3Rd; // @dynamic wxaSignature3Rd;

@end

