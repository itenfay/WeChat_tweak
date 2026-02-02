//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, TextViewData;

@interface PaymentCollapseData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *collapseCard; // @dynamic collapseCard;
@property(retain, nonatomic) TextViewData *collapseDesc; // @dynamic collapseDesc;
@property(retain, nonatomic) NSMutableArray *collapseNewCard; // @dynamic collapseNewCard;
@property(nonatomic) _Bool isDefaultCollapse; // @dynamic isDefaultCollapse;
@property(nonatomic) _Bool isShowCollapse; // @dynamic isShowCollapse;

@end

