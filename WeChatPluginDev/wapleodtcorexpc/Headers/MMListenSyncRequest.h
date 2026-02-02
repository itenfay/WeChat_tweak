//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface MMListenSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *syncBuff; // @dynamic syncBuff;
@property(retain, nonatomic) NSData *syncCtxsBuffer; // @dynamic syncCtxsBuffer;
@property(retain, nonatomic) NSString *syncId; // @dynamic syncId;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

