//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenGetLyricResponse_Item_TryInfo, MMListenTTSInfo, NSMutableArray, NSString;

@interface MMListenGetLyricResponse_Item : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *lyric; // @dynamic lyric;
@property(retain, nonatomic) NSMutableArray *originalLineIndex; // @dynamic originalLineIndex;
@property(retain, nonatomic) NSString *translateLyric; // @dynamic translateLyric;
@property(retain, nonatomic) MMListenGetLyricResponse_Item_TryInfo *tryInfo; // @dynamic tryInfo;
@property(retain, nonatomic) MMListenTTSInfo *ttsInfo; // @dynamic ttsInfo;

@end

