//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderRingBackSetting, MusicRingBackSetting;

@interface NewRingBackSetting : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) FinderRingBackSetting *finder; // @dynamic finder;
@property(retain, nonatomic) MusicRingBackSetting *music; // @dynamic music;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

