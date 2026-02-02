//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface BizProfileV2Req : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bizSessionId; // @dynamic bizSessionId;
@property(nonatomic) unsigned int bizType; // @dynamic bizType;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSData *offset; // @dynamic offset;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchClickId; // @dynamic searchClickId;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(nonatomic) unsigned long long tmplControlFlag; // @dynamic tmplControlFlag;

@end

