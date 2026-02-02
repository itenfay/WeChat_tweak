//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ImageViewData, NSMutableArray, NewCardItemViewData, PaymentCollapseData, TextViewData;

@interface PaymentSelectPageData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ImageViewData *backImage; // @dynamic backImage;
@property(retain, nonatomic) NSMutableArray *card; // @dynamic card;
@property(retain, nonatomic) NSMutableArray *multiNewCard; // @dynamic multiNewCard;
@property(retain, nonatomic) NewCardItemViewData *newCard; // @dynamic newCard;
@property(retain, nonatomic) PaymentCollapseData *paymentCollapse; // @dynamic paymentCollapse;
@property(retain, nonatomic) TextViewData *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;

@end

