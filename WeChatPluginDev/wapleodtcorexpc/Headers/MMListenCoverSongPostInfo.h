//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenCoverSongPostInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coveredSongListenId; // @dynamic coveredSongListenId;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long sectionBegin; // @dynamic sectionBegin;
@property(nonatomic) unsigned long long sectionEnd; // @dynamic sectionEnd;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

