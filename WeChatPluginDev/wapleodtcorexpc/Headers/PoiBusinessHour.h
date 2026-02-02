//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PoiBusinessHour : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *formatCloseTimes; // @dynamic formatCloseTimes;
@property(retain, nonatomic) NSMutableArray *formatOpenTimes; // @dynamic formatOpenTimes;
@property(retain, nonatomic) NSString *hour; // @dynamic hour;
@property(retain, nonatomic) NSMutableArray *times; // @dynamic times;

@end

