//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MMListenUpdateMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(nonatomic) int type; // @dynamic type;

@end

