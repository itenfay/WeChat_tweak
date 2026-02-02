//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface PreAcceptGiftCardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buttonColor; // @dynamic buttonColor;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *fromUserHeadImgUrl; // @dynamic fromUserHeadImgUrl;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) _Bool ignore; // @dynamic ignore;
@property(retain, nonatomic) NSString *outOfCardWording; // @dynamic outOfCardWording;
@property(retain, nonatomic) NSString *packageUrl; // @dynamic packageUrl;
@property(retain, nonatomic) NSString *seeOtherWording; // @dynamic seeOtherWording;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

