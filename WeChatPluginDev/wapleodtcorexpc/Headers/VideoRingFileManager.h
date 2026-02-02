//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoRingFileManager : NSObject
{
}

+ (unsigned long long)getFileNumOfSounds;
+ (void)CopyRingFile:(id)arg1 toEffectPathForRing:(id)arg2;
+ (_Bool)SetExclusiveRingForFriend:(id)arg1 FromPath:(id)arg2;
+ (_Bool)HasExclusiveRingFileForFriend:(id)arg1;
+ (void)RemoveExclusiveRingFileIfExistForFriend:(id)arg1 reason:(id)arg2;
+ (_Bool)RemoveExclusiveRingFileForFriend:(id)arg1;
+ (id)GetExclusiveRingFilePathForFriend:(id)arg1;
+ (id)GetExclusiveRingFileNameForFriend:(id)arg1;
+ (_Bool)SetGlobalRingFromPath:(id)arg1;
+ (_Bool)HasGlobalRingFile;
+ (void)RemoveGlobalRingFileIfExistForReason:(id)arg1;
+ (_Bool)RemoveGlobalRingFile;
+ (id)GetGlobalRingFilePath;
+ (id)GetGlobalRingFileName;
+ (_Bool)copyMsgRingToSoundsDir;
+ (_Bool)SetDefaultRingFromPath:(id)arg1;
+ (id)GetDefaultRingFilePath;
+ (id)GetDefauleRingFileName;
+ (id)GetRingVibrateFilePathWithClientId:(id)arg1;
+ (id)GetRingVibrateUsingFilePathWithClientId:(id)arg1;
+ (id)GetRingVibrateTempFilePathWithClientId:(id)arg1;
+ (id)GetRingVibrateTempFileDir;
+ (id)GetRingVibrateUsingFileDir;
+ (id)GetRingVibrateFileDir;
+ (id)RingToneFilePathForCaller:(id)arg1;
+ (id)GlobalRingToneSoundName;
+ (id)RingToneSoundNameForCaller:(id)arg1;
+ (id)GetFilePathForRingFile:(id)arg1;
+ (id)RingIdForFriend:(id)arg1;
+ (id)GetDownloadRingPathWithClientId:(id)arg1;
+ (id)GetDownloadRingCropedAudioFileDir;
+ (id)GetDownloadRingMediaDir;
+ (id)GetRingMediaDir;

@end

