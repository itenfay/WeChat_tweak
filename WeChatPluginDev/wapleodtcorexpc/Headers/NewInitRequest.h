//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface NewInitRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *currentSynckey; // @dynamic currentSynckey;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) SKBuiltinBuffer_t *maxSynckey; // @dynamic maxSynckey;
@property(retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf; // @dynamic syncUniqKeyBuf;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

