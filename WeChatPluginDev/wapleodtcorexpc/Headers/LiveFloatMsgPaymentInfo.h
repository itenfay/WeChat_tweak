//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface LiveFloatMsgPaymentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *decorationInfos; // @dynamic decorationInfos;
@property(nonatomic) unsigned int decorationLevel; // @dynamic decorationLevel;
@property(retain, nonatomic) NSMutableArray *frameColor; // @dynamic frameColor;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned long long unitPriceInWecoin; // @dynamic unitPriceInWecoin;
@property(retain, nonatomic) NSMutableArray *wordColor; // @dynamic wordColor;

@end

