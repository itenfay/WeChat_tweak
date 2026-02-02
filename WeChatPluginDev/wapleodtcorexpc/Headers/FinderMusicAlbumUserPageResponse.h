//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiteAppParam, FinderMusicAlbumUserPageResponse_AlbumPatch, FinderMusicAlbumUserPageResponse_MusicPatch, FinderMusicAlbumUserPageResponse_SonglistPatch, FinderMusicBaikeSummary, FinderMusicStatisticsInfo;

@interface FinderMusicAlbumUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderMusicAlbumUserPageResponse_AlbumPatch *albumPatch; // @dynamic albumPatch;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long ctrlFlag; // @dynamic ctrlFlag;
@property(retain, nonatomic) FinderLiteAppParam *liteAppParam; // @dynamic liteAppParam;
@property(retain, nonatomic) FinderLiteAppParam *musicManageLiteAppParam; // @dynamic musicManageLiteAppParam;
@property(retain, nonatomic) FinderMusicAlbumUserPageResponse_MusicPatch *musicPatch; // @dynamic musicPatch;
@property(retain, nonatomic) FinderMusicAlbumUserPageResponse_SonglistPatch *songlistPatch; // @dynamic songlistPatch;
@property(retain, nonatomic) FinderMusicStatisticsInfo *statisticsInfo; // @dynamic statisticsInfo;
@property(retain, nonatomic) FinderMusicBaikeSummary *summary; // @dynamic summary;

@end

