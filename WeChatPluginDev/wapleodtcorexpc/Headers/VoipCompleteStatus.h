//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class SKBuiltinBuffer_t;

@interface VoipCompleteStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *buffer; // @dynamic buffer;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(nonatomic) unsigned int key; // @dynamic key;
@property(nonatomic) unsigned int uin; // @dynamic uin;

@end

