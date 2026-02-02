//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MusicLiveMsgLocation, MusicLiveMsgText;

@class WXPBGeneratedMessage;

@interface MusicLiveMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MusicLiveMsgLocation *location; // @dynamic location;
@property(retain, nonatomic) MusicLiveMsgText *text; // @dynamic text;
@property(nonatomic) int type; // @dynamic type;

@end

