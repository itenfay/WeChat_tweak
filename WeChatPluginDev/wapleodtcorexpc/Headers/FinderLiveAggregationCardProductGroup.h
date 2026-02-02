//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAggregationCardAnchor, FinderLiveAggregationCardProduct, NSData, NSMutableArray, NSString;

@interface FinderLiveAggregationCardProductGroup : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAggregationCardAnchor *anchor; // @dynamic anchor;
@property(retain, nonatomic) NSData *entryBuffer; // @dynamic entryBuffer;
@property(retain, nonatomic) NSString *jumpBypassBuffer; // @dynamic jumpBypassBuffer;
@property(retain, nonatomic) FinderLiveAggregationCardProduct *product; // @dynamic product;
@property(retain, nonatomic) NSMutableArray *productItem; // @dynamic productItem;

@end

