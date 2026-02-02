//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddOpenIMKefuContactContext, NSData, NSString;

@interface AddOpenIMKefuContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AddOpenIMKefuContactContext *context; // @dynamic context;
@property(retain, nonatomic) NSString *finderContext; // @dynamic finderContext;
@property(retain, nonatomic) NSString *kfUsername; // @dynamic kfUsername;
@property(retain, nonatomic) NSData *spamContext; // @dynamic spamContext;

@end

