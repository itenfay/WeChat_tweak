//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenSearchResultFinderVoice, MMListenSearchResultGenre, MMListenSearchResultMpUser, MMListenSearchResultMusic, MMListenSearchResultMusicAlbum, MMListenSearchResultNonMusic, MMListenSearchResultPlaylist, MMListenSearchResultSinger, NSData, NSMutableArray, NSString;

@interface MMListenSearchResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenSearchResultFinderVoice *finderVoice; // @dynamic finderVoice;
@property(retain, nonatomic) MMListenSearchResultGenre *genre; // @dynamic genre;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *lines; // @dynamic lines;
@property(retain, nonatomic) NSString *listenReportInfo; // @dynamic listenReportInfo;
@property(retain, nonatomic) MMListenSearchResultMpUser *mpUser; // @dynamic mpUser;
@property(retain, nonatomic) MMListenSearchResultMusic *music; // @dynamic music;
@property(retain, nonatomic) MMListenSearchResultMusicAlbum *musicAlbum; // @dynamic musicAlbum;
@property(retain, nonatomic) MMListenSearchResultNonMusic *nonMusic; // @dynamic nonMusic;
@property(retain, nonatomic) MMListenSearchResultPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *searchReportInfo; // @dynamic searchReportInfo;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) MMListenSearchResultSinger *singer; // @dynamic singer;

@end

