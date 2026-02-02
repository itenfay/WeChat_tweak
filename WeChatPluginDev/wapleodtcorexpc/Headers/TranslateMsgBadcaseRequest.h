//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TranslateMsgBadcaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fromType; // @dynamic fromType;
@property(retain, nonatomic) NSString *oriText; // @dynamic oriText;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(retain, nonatomic) NSString *resText; // @dynamic resText;
@property(retain, nonatomic) NSString *targetLang; // @dynamic targetLang;

@end

