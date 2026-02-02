//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ExtSession, SKBuiltinBuffer_t;

@interface GetIosExtensionKeyResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ExtSession *extensionSession; // @dynamic extensionSession;
@property(retain, nonatomic) SKBuiltinBuffer_t *key; // @dynamic key;

@end

