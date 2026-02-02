//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, ResourceKey, ResourceMeta;

@interface Resource : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int downloadNetType; // @dynamic downloadNetType;
@property(nonatomic) unsigned int eid; // @dynamic eid;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(retain, nonatomic) ResourceMeta *info; // @dynamic info;
@property(retain, nonatomic) ResourceKey *key; // @dynamic key;
@property(nonatomic) unsigned int oper; // @dynamic oper;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) unsigned int reportId; // @dynamic reportId;
@property(nonatomic) unsigned int retryInterval; // @dynamic retryInterval;
@property(nonatomic) unsigned int retryTime; // @dynamic retryTime;
@property(retain, nonatomic) NSString *sampleId; // @dynamic sampleId;
@property(nonatomic) unsigned int subType; // @dynamic subType;

@end

