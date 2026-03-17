//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveGetPaymentItemsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int livingTime; // @dynamic livingTime;
@property(retain, nonatomic) NSMutableArray *productList; // @dynamic productList;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

