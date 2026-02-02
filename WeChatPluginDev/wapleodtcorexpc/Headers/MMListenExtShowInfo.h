//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenBannerInfo, MMListenPlaylistExtShowInfo, MMListenSingerRadioShowInfo, MMListenSongOriginInfo, MMListenSpringFestivalGalaPlaylistInfo;

@interface MMListenExtShowInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenBannerInfo *bottomBannerInfo; // @dynamic bottomBannerInfo;
@property(retain, nonatomic) MMListenPlaylistExtShowInfo *playlistExtShowInfo; // @dynamic playlistExtShowInfo;
@property(retain, nonatomic) MMListenSingerRadioShowInfo *singerRadioShowInfo; // @dynamic singerRadioShowInfo;
@property(retain, nonatomic) MMListenSongOriginInfo *songOriginInfo; // @dynamic songOriginInfo;
@property(retain, nonatomic) MMListenSpringFestivalGalaPlaylistInfo *springFestivalGalaPlaylistInfo; // @dynamic springFestivalGalaPlaylistInfo;

@end

