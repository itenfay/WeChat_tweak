//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FinderPoiGroupBuyResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *footerWording; // @dynamic footerWording;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *poiGroupBuyCouponList; // @dynamic poiGroupBuyCouponList;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

