//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DynamicColor, NSString;

@interface GetTimeLimitPromoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adName; // @dynamic adName;
@property(retain, nonatomic) DynamicColor *backColor; // @dynamic backColor;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *logoMd5; // @dynamic logoMd5;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) unsigned int queryPerncentage; // @dynamic queryPerncentage;
@property(nonatomic) unsigned int queryTimestamp; // @dynamic queryTimestamp;
@property(nonatomic) _Bool showPromo; // @dynamic showPromo;
@property(retain, nonatomic) DynamicColor *textColor; // @dynamic textColor;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

