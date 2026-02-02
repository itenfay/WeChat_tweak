//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, PriceAndFavorViewData, TextViewData;

@interface OrderDetailViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) TextViewData *footerText; // @dynamic footerText;
@property(retain, nonatomic) NSMutableArray *otherDetail; // @dynamic otherDetail;
@property(retain, nonatomic) PriceAndFavorViewData *priceAndFavor; // @dynamic priceAndFavor;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

