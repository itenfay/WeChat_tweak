//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface ShakeMusicResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int musicId; // @dynamic musicId;
@property(nonatomic) float offset; // @dynamic offset;
@property(nonatomic) unsigned int resultType; // @dynamic resultType;
@property(retain, nonatomic) SKBuiltinBuffer_t *songAlbum; // @dynamic songAlbum;
@property(retain, nonatomic) SKBuiltinBuffer_t *songAlbumUrl; // @dynamic songAlbumUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *songLyric; // @dynamic songLyric;
@property(retain, nonatomic) SKBuiltinBuffer_t *songName; // @dynamic songName;
@property(retain, nonatomic) SKBuiltinBuffer_t *songSinger; // @dynamic songSinger;
@property(retain, nonatomic) SKBuiltinBuffer_t *songWapLinkUrl; // @dynamic songWapLinkUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *songWebUrl; // @dynamic songWebUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *songWifiUrl; // @dynamic songWifiUrl;
@property(retain, nonatomic) NSString *tvdescriptionXml; // @dynamic tvdescriptionXml;
@property(nonatomic) unsigned int tvtype; // @dynamic tvtype;

@end

