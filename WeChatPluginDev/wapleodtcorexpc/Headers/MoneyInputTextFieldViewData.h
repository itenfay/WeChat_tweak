//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DynamicColor, TextViewData;

@interface MoneyInputTextFieldViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) TextViewData *currencySymbol; // @dynamic currencySymbol;
@property(retain, nonatomic) DynamicColor *cursorColor; // @dynamic cursorColor;
@property(retain, nonatomic) TextViewData *footerDesc; // @dynamic footerDesc;
@property(retain, nonatomic) DynamicColor *hintTextColor; // @dynamic hintTextColor;
@property(retain, nonatomic) DynamicColor *inputAmountColor; // @dynamic inputAmountColor;
@property(retain, nonatomic) TextViewData *title; // @dynamic title;

@end

