//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface StoryOp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long objId; // @dynamic objId;
@property(retain, nonatomic) SKBuiltinBuffer_t *opContent; // @dynamic opContent;
@property(nonatomic) unsigned int opType; // @dynamic opType;

@end

