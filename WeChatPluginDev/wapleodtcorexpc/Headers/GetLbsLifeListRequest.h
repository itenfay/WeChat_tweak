//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, LbsLocation, NSString, SKBuiltinBuffer_t;

@interface GetLbsLifeListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(nonatomic) unsigned int entryTime; // @dynamic entryTime;
@property(nonatomic) unsigned int indoorSwitch; // @dynamic indoorSwitch;
@property(nonatomic) unsigned int isAutoQuery; // @dynamic isAutoQuery;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int searchAll; // @dynamic searchAll;

@end

