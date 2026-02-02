//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardMiniAppInfo, NSString;

@interface CardPrimaryPkgElement : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cardHomePageId; // @dynamic cardHomePageId;
@property(retain, nonatomic) NSString *primaryElementIcon; // @dynamic primaryElementIcon;
@property(retain, nonatomic) NSString *primaryElementSkipWording; // @dynamic primaryElementSkipWording;
@property(retain, nonatomic) NSString *primaryElementWording; // @dynamic primaryElementWording;
@property(retain, nonatomic) CardMiniAppInfo *primaryMiniAppInfo; // @dynamic primaryMiniAppInfo;
@property(retain, nonatomic) NSString *primaryNativeUrl; // @dynamic primaryNativeUrl;
@property(nonatomic) int primaryOpType; // @dynamic primaryOpType;
@property(retain, nonatomic) NSString *primaryUrl; // @dynamic primaryUrl;

@end

