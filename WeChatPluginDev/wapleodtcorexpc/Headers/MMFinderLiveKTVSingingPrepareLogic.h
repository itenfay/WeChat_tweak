//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveKSKitMusicSong, MMFinderLiveKTVBox, MMLiveStorageCleanupPinningToken;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSingingPrepareLogic : NSObject
{
    id <MMLiveUniqueTaskId> _taskId;
    MMFinderLiveKSKitMusicSong *_songData;
    MMLiveStorageCleanupPinningToken *_songResourcesPinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *songResourcesPinningToken; // @synthesize songResourcesPinningToken=_songResourcesPinningToken;
@property(retain, nonatomic) MMFinderLiveKSKitMusicSong *songData; // @synthesize songData=_songData;
@property(retain, nonatomic) id <MMLiveUniqueTaskId> taskId; // @synthesize taskId=_taskId;
- (id)finderTaskId;
@property(readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
- (void)onSingPrepareResponse:(id)arg1 succ:(_Bool)arg2;
- (void)startToPrepareSongResource:(id)arg1;
- (void)prepareToStartSing;
- (id)initWithTaskId:(id)arg1;

@end

