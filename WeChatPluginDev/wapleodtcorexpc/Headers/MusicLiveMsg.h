//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MusicLiveMsgLocation, MusicLiveMsgText;

@interface MusicLiveMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MusicLiveMsgLocation *location; // @dynamic location;
@property(retain, nonatomic) MusicLiveMsgText *text; // @dynamic text;
@property(nonatomic) int type; // @dynamic type;

@end

