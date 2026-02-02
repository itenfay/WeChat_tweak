//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizChatUser, NSString;

@interface BizChatSearchContactMatchedUser : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *matchedField; // @dynamic matchedField;
@property(retain, nonatomic) NSString *matchedValue; // @dynamic matchedValue;
@property(retain, nonatomic) BizChatUser *user; // @dynamic user;

@end

