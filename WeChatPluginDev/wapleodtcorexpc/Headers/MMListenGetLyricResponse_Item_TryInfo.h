//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenGetLyricResponse_Item_TryInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *fullLyric; // @dynamic fullLyric;
@property(nonatomic) unsigned int fullPlayLength; // @dynamic fullPlayLength;
@property(retain, nonatomic) NSString *fullTranslateLyric; // @dynamic fullTranslateLyric;
@property(nonatomic) unsigned int tryBegin; // @dynamic tryBegin;
@property(nonatomic) unsigned int tryEnd; // @dynamic tryEnd;

@end

