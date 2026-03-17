//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMusicMVModelConverter : NSObject
{
}

+ (id)listenMusicInfoWithSongId:(id)arg1 musicInfo:(id)arg2;
+ (void)fillSongStatusResponse:(id)arg1 intoMusicInfo:(id)arg2;
+ (void)fillSongStatusResponse:(id)arg1 intoSongInfo:(id)arg2;
+ (void)updateOldMusicInfo:(id)arg1 WithNewMusicInfo:(id)arg2;
+ (id)genMusicInfoFromSongInfo:(id)arg1;
+ (id)genMusicInfoFromMVModel:(id)arg1;
+ (id)genMusicIdFromSongInfo:(id)arg1 mvObjectId:(id)arg2 mvCreaateTime:(double)arg3;
+ (id)genMusicIdFromMVModel:(id)arg1;
+ (id)finderOriginalInfoFromMVOriginalInfo:(id)arg1;
+ (id)mvOriginalInfoFromFinderOriginalInfo:(id)arg1;
+ (id)finderSongInfoFromMVSongInfo:(id)arg1;
+ (id)mvSongInfoFromFinderSongInfo:(id)arg1;
+ (id)finderTrackListFromArrTrackItem:(id)arg1;
+ (id)arrTrackItemFromFinderTrackList:(id)arg1;
+ (id)finderMVInfoFromMusicMVModel:(id)arg1;
+ (id)musicMVModelFromFinderDataItem:(id)arg1 finderObject:(id)arg2;

@end

