//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenVideoBgmItem, NSString;

@interface FinderBgmItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (int)bgmItemType;
- (id)uniqueId;
- (id)feedId;
- (id)recommendBuf;
- (_Bool)isEqualToMusicData:(id)arg1;
- (id)musicLyricInfos;
- (_Bool)isMusicLiked;
- (_Bool)playable;
- (id)songAuthorName;
- (id)songName;
- (id)coverUrl;
- (id)musicId;
- (unsigned long long)songDurationInMs;
- (unsigned long long)musicStartTimeInMs;
@property(readonly, copy) NSString *description;
- (id)musicUrl;
- (unsigned long long)musicReportType;
- (void)setMusicReportType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(retain, nonatomic) MMListenVideoBgmItem *listenItem; // @dynamic listenItem;
@property(readonly) Class superclass;

@end

