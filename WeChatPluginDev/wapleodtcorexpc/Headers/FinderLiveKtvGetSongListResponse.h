//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveKtvPlayCountInfo, FinderLiveKtvSongListInfo;

@interface FinderLiveKtvGetSongListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int firstSongVersion; // @dynamic firstSongVersion;
@property(retain, nonatomic) FinderLiveKtvPlayCountInfo *playCountInfo; // @dynamic playCountInfo;
@property(nonatomic) unsigned int selfLastestSongIndex; // @dynamic selfLastestSongIndex;
@property(retain, nonatomic) FinderLiveKtvSongListInfo *songListInfo; // @dynamic songListInfo;

@end

