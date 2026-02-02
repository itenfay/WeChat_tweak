//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CardMiniAppInfo, NSString;

@interface CardHomePageFAQItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *faqJumpUrl; // @dynamic faqJumpUrl;
@property(retain, nonatomic) CardMiniAppInfo *faqMiniAppInfo; // @dynamic faqMiniAppInfo;
@property(retain, nonatomic) NSString *faqNativeUrl; // @dynamic faqNativeUrl;
@property(nonatomic) int faqOpType; // @dynamic faqOpType;
@property(retain, nonatomic) NSString *faqWording; // @dynamic faqWording;

@end

