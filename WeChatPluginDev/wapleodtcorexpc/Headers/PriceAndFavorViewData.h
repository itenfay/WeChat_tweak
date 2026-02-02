//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SingleLineTextViewData;

@interface PriceAndFavorViewData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SingleLineTextViewData *favor; // @dynamic favor;
@property(nonatomic) _Bool isShowPrice; // @dynamic isShowPrice;
@property(retain, nonatomic) NSString *originalPrice; // @dynamic originalPrice;
@property(retain, nonatomic) SingleLineTextViewData *price; // @dynamic price;
@property(retain, nonatomic) NSString *viewId; // @dynamic viewId;

@end

