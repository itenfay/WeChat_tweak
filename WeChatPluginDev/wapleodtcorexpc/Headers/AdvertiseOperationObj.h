//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdvertiseObject, SKBuiltinBuffer_t;

@interface AdvertiseOperationObj : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *extBuf; // @dynamic extBuf;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) AdvertiseObject *replaceAdObj; // @dynamic replaceAdObj;
@property(nonatomic) unsigned int replaceLevel; // @dynamic replaceLevel;

@end

