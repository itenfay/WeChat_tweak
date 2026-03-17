//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "EditVideoBGMPlayerData-Protocol.h"

@class NSMutableArray, NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedMusicDataProtocol <EditVideoBGMPlayerData>
- (_Bool)isEqualToMusicData:(id <MMBGMSelectedMusicDataProtocol>)arg1;
- (NSMutableArray *)musicLyricInfos;
- (_Bool)isMusicLiked;
- (_Bool)playable;
- (NSString *)songAuthorName;
- (NSString *)songName;
- (NSString *)coverUrl;
- (NSString *)musicId;

@optional
- (int)bgmItemType;
- (NSString *)uniqueId;
- (unsigned long long)musicReportType;
- (NSString *)feedId;
- (NSString *)recommendBuf;
@end

