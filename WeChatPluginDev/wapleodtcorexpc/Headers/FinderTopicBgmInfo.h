//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderMusicInfo, NSString;

@interface FinderTopicBgmInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *audioTrackUrl; // @dynamic audioTrackUrl;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;

@end

