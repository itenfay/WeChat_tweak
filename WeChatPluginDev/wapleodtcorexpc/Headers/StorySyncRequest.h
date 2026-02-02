//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface StorySyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(nonatomic) unsigned int selector; // @dynamic selector;
@property(nonatomic) unsigned int syncScene; // @dynamic syncScene;

@end

