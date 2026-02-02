//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenItem, NSString;

@interface MMListenCheckSpamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isRedirect; // @dynamic isRedirect;
@property(retain, nonatomic) MMListenItem *redirectListenItem; // @dynamic redirectListenItem;
@property(nonatomic) int spamFlag; // @dynamic spamFlag;
@property(retain, nonatomic) NSString *unplayableMsg; // @dynamic unplayableMsg;

@end

