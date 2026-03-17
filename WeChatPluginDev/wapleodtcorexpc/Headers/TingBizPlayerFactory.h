//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingBizPlayerFactory : NSObject
{
}

+ (_Bool)getTPPlayerTakeOverDownloadValueForOtherType;
+ (_Bool)isEncryptExptEnable;
+ (_Bool)isTPPlayerTakeOverDownloadForMusic;
+ (long long)getTPPlayerTakeOverDownloadForMusicValue;
+ (_Bool)isTPPlayerIgnoreVideoError;
+ (_Bool)isTPPlayerForLocalFile;
+ (_Bool)isTPPlayerForFinderAudio;
+ (_Bool)isTPPlayerForWeAppLocalFile;
+ (_Bool)isTPPlayerForWeAppAudio;
+ (_Bool)isTPPlayerForArticleAudio;
+ (_Bool)isTPPlayerForArticleNoHls:(id)arg1;
+ (_Bool)isVoiceAbleMusic:(id)arg1;
+ (_Bool)isTPPlayerForMusicEnable:(id)arg1;
+ (_Bool)isPreloadNextPlayerEnableForTingItem:(id)arg1;
+ (_Bool)isTPPlayerEnableForTingItem:(id)arg1;
+ (id)bizPlayerForTingItem:(id)arg1;
+ (_Bool)shouldTpTakeOverDownload:(id)arg1;

@end

