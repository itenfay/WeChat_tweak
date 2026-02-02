//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface NewLifeSelectMusicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(nonatomic) int docType; // @dynamic docType;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) NSMutableArray *singer; // @dynamic singer;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;

@end

