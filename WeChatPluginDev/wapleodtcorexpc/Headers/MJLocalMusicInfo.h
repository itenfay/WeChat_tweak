//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMJMusicInfo;

@interface MJLocalMusicInfo : NSObject
{
    OMJMusicInfo *_musicInfo;
    NSString *_musicFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *musicFilePath; // @synthesize musicFilePath=_musicFilePath;
@property(retain, nonatomic) OMJMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (_Bool)isEqualToMusicData:(id)arg1;
- (id)musicLyricInfos;
- (_Bool)isMusicLiked;
- (_Bool)playable;
@property(readonly, copy) NSString *description;
- (id)musicUrl;
- (unsigned long long)songDurationInMs;
- (id)songAuthorName;
- (id)songName;
- (id)coverUrl;
- (id)musicId;
- (id)initWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

