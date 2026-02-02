//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMusicInfo, NSString;

@interface FinderMusicSearchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *highlightAlbumName; // @dynamic highlightAlbumName;
@property(retain, nonatomic) NSString *highlightArtist; // @dynamic highlightArtist;
@property(retain, nonatomic) NSString *highlightSongName; // @dynamic highlightSongName;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;

@end

