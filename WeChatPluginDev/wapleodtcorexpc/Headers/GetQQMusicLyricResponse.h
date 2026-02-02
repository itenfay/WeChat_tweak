//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SKBuiltinBuffer_t;

@interface GetQQMusicLyricResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *songAlbum; // @dynamic songAlbum;
@property(retain, nonatomic) SKBuiltinBuffer_t *songAlbumUrl; // @dynamic songAlbumUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *songLyric; // @dynamic songLyric;

@end

