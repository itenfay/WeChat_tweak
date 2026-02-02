//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface SearchEmotionRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(retain, nonatomic) SKBuiltinBuffer_t *pageBuf; // @dynamic pageBuf;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;

@end

