//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DisturbTimeSpan;

@interface DisturbSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int allDaySetting; // @dynamic allDaySetting;
@property(retain, nonatomic) DisturbTimeSpan *allDayTime; // @dynamic allDayTime;
@property(nonatomic) unsigned int nightSetting; // @dynamic nightSetting;
@property(retain, nonatomic) DisturbTimeSpan *nightTime; // @dynamic nightTime;

@end

