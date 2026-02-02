//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCircleAlbumInfo, MMListenCircleXFinderInfo, MMListenCircleXListenInfo, MMListenSimplePlayableInfo, MMListenSimplePlaylistInfo, MMListenSingerInfo, NSData, NSString;

@interface MMListenCircleXAttachmentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCircleAlbumInfo *albumInfo; // @dynamic albumInfo;
@property(retain, nonatomic) NSData *ctxRecommendInfoBuffer; // @dynamic ctxRecommendInfoBuffer;
@property(retain, nonatomic) MMListenCircleXFinderInfo *finderInfo; // @dynamic finderInfo;
@property(retain, nonatomic) NSString *linkUrl; // @dynamic linkUrl;
@property(retain, nonatomic) MMListenCircleXListenInfo *listenInfo; // @dynamic listenInfo;
@property(nonatomic) unsigned int picHeight; // @dynamic picHeight;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(nonatomic) unsigned int picWidth; // @dynamic picWidth;
@property(retain, nonatomic) MMListenSimplePlayableInfo *playableInfo; // @dynamic playableInfo;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *playlistInfo; // @dynamic playlistInfo;
@property(retain, nonatomic) MMListenSingerInfo *singerInfo; // @dynamic singerInfo;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

