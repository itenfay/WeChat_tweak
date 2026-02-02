//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingPlayerHelper : NSObject
{
}

+ (void)pauseCurrentPlayingItem;
+ (id)createCurrentPlayerIfNeeded;
+ (id)createFlowPlayer:(_Bool)arg1;
+ (id)createFlowPlayer;
+ (_Bool)isCurrentPlayerExist;
+ (id)currentPlayer;
+ (id)globalPlayer;
+ (void)playWithListenIds:(id)arg1 index:(unsigned long long)arg2 launchOptions:(id)arg3 configuration:(id)arg4;
+ (void)playWithListenIds:(id)arg1 index:(unsigned long long)arg2 scene:(int)arg3 enterPlayer:(_Bool)arg4 configuration:(id)arg5;
+ (void)playWithModel:(id)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)playWithModel:(id)arg1 launchOptions:(id)arg2;
+ (void)playAudioItem:(id)arg1 launchOptions:(id)arg2;
+ (_Bool)audioSceneAllowEnterSqaure:(id)arg1 andScene:(int)arg2;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 launchOptions:(id)arg4;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4 enterPlayer:(_Bool)arg5;
+ (void)playWithCategoryItem:(id)arg1 presetItems:(id)arg2 index:(unsigned long long)arg3 scene:(int)arg4;
+ (void)playTingItem:(id)arg1 launchOptions:(id)arg2;
+ (void)playTingItem:(id)arg1 scene:(int)arg2 enterPlayer:(_Bool)arg3;
+ (void)playTingItem:(id)arg1 scene:(int)arg2;
+ (void)playWithFinderDataItem:(id)arg1 playbackTime:(double)arg2 scene:(int)arg3;
+ (void)playWithMusicInfo:(id)arg1 scene:(int)arg2 enterPlayer:(_Bool)arg3;
+ (void)playWithMusicInfo:(id)arg1 scene:(int)arg2;

@end

