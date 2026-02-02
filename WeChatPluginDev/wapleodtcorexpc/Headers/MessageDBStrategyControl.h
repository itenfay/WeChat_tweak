//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface MessageDBStrategyControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int checkIntervalDays; // @dynamic checkIntervalDays;
@property(nonatomic) _Bool enableCleanStrategy; // @dynamic enableCleanStrategy;
@property(retain, nonatomic) NSMutableArray *strategyItems; // @dynamic strategyItems;

@end

