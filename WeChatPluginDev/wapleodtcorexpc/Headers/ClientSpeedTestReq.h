//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface ClientSpeedTestReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int concurrentNum; // @dynamic concurrentNum;
@property(nonatomic) unsigned int downloadSize; // @dynamic downloadSize;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(nonatomic) unsigned int sceneCode; // @dynamic sceneCode;
@property(nonatomic) unsigned int uploadSize; // @dynamic uploadSize;

@end

