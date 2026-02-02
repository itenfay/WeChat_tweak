//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MusicRingBack, MusicRingBackHitInfo, NSMutableArray, NSString;

@interface MusicRingBackDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(nonatomic) unsigned long long duration; // @dynamic duration;
@property(retain, nonatomic) MusicRingBackHitInfo *hitInfo; // @dynamic hitInfo;
@property(nonatomic) unsigned int musicType; // @dynamic musicType;
@property(retain, nonatomic) MusicRingBack *ringBack; // @dynamic ringBack;
@property(nonatomic) unsigned long long settingCount; // @dynamic settingCount;
@property(retain, nonatomic) NSMutableArray *singers; // @dynamic singers;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

