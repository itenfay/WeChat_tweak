//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MktPaymentChannel, NSString;

@interface BankFavGuideForBindCard : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)fromDic:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *defaultFavCombId; // @dynamic defaultFavCombId;
@property(retain, nonatomic) NSString *guideBtnBgColor; // @dynamic guideBtnBgColor;
@property(retain, nonatomic) NSString *guideBtnText; // @dynamic guideBtnText;
@property(retain, nonatomic) NSString *guideBtnTextColor; // @dynamic guideBtnTextColor;
@property(retain, nonatomic) NSString *guideContent; // @dynamic guideContent;
@property(retain, nonatomic) NSString *guideContentColor; // @dynamic guideContentColor;
@property(retain, nonatomic) NSString *guideLogo; // @dynamic guideLogo;
@property(nonatomic) unsigned int isShowGuide; // @dynamic isShowGuide;
@property(retain, nonatomic) MktPaymentChannel *paymentChannel; // @dynamic paymentChannel;

@end

