//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMusicInfo, NSString;

@interface FinderObjectBGMInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) unsigned int hasBgm; // @dynamic hasBgm;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;

@end

