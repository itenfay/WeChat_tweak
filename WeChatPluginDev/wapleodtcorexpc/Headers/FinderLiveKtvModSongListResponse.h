//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveGuideInfo, FinderLiveKtvPlayerWaitList, FinderLiveKtvSongInfo, NSMutableArray, NSString;

@interface FinderLiveKtvModSongListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int allWaitSongSize; // @dynamic allWaitSongSize;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int firstSongVersion; // @dynamic firstSongVersion;
@property(retain, nonatomic) FinderLiveGuideInfo *guideInfo; // @dynamic guideInfo;
@property(retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList; // @dynamic ktvPlayerWaitList;
@property(nonatomic) unsigned int newAddSongIndex; // @dynamic newAddSongIndex;
@property(retain, nonatomic) FinderLiveKtvSongInfo *newAddSongInfo; // @dynamic newAddSongInfo;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(nonatomic) unsigned int selfWaitSongSize; // @dynamic selfWaitSongSize;
@property(retain, nonatomic) NSMutableArray *songInfoList; // @dynamic songInfoList;
@property(nonatomic) unsigned long long songListVersion; // @dynamic songListVersion;

@end

