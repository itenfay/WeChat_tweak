//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMVInfo_FinderMVOriginalInfo, FinderMVInfo_FinderMVSongInfo, NSMutableArray;

@interface FinderMVInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int draftJumpPage; // @dynamic draftJumpPage;
@property(nonatomic) int mvType; // @dynamic mvType;
@property(retain, nonatomic) NSMutableArray *orderedTrackList; // @dynamic orderedTrackList;
@property(retain, nonatomic) NSMutableArray *orderedTrackListFlexClip; // @dynamic orderedTrackListFlexClip;
@property(retain, nonatomic) FinderMVInfo_FinderMVOriginalInfo *originalInfo; // @dynamic originalInfo;
@property(retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songInfo; // @dynamic songInfo;

@end

