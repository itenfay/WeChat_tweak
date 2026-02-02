//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetWCOProductListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alertDesc; // @dynamic alertDesc;
@property(retain, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *callCountry; // @dynamic callCountry;
@property(nonatomic) unsigned int cellCount; // @dynamic cellCount;
@property(retain, nonatomic) NSMutableArray *cellList; // @dynamic cellList;
@property(retain, nonatomic) NSString *currentCurrency; // @dynamic currentCurrency;
@property(nonatomic) int isAllowChangeCurrency; // @dynamic isAllowChangeCurrency;
@property(retain, nonatomic) NSString *lastProductId; // @dynamic lastProductId;

@end

