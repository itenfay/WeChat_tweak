//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface PoiFormatBusinessTime : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *dateBegin; // @dynamic dateBegin;
@property(retain, nonatomic) NSString *dateEnd; // @dynamic dateEnd;
@property(nonatomic) _Bool isDefault; // @dynamic isDefault;
@property(retain, nonatomic) NSMutableArray *months; // @dynamic months;
@property(retain, nonatomic) NSString *special; // @dynamic special;
@property(retain, nonatomic) NSMutableArray *times; // @dynamic times;
@property(retain, nonatomic) NSMutableArray *weekDays; // @dynamic weekDays;

@end

