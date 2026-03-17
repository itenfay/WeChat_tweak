//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSnsPlayerCommon : NSObject
{
}

+ (id)getImageWith:(id)arg1;
+ (id)getDownloadReferUrlWithScene:(long long)arg1;
+ (id)parseMediaIDFromFileKey:(id)arg1;
+ (id)generateFileKeyWithMediaItem:(id)arg1 source:(long long)arg2;
+ (id)generateDownloadArgsWrapWithMediaItem:(id)arg1 source:(long long)arg2 HDRFormat:(long long)arg3 playerScene:(unsigned long long)arg4;
+ (void)setupPlayerArgsForLivePhotoPlaying:(id)arg1;
+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)arg1 isMuted:(_Bool)arg2 playerScene:(unsigned long long)arg3;
+ (id)generatePlayerArgsWithMediaItem:(id)arg1 isMuted:(_Bool)arg2 playMode:(unsigned long long)arg3 playerScene:(unsigned long long)arg4 downloadArgs:(id)arg5;
+ (id)getPlayerWith:(id)arg1 andIsMute:(_Bool)arg2 notExistPlayMode:(unsigned long long)arg3 andPlayerScene:(unsigned long long)arg4;
+ (_Bool)allowsH265Download;
+ (_Bool)isPlayerSceneOfMoments:(unsigned long long)arg1;

@end

