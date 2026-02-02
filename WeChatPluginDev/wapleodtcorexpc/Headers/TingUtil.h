//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingUtil : NSObject
{
}

+ (id)unsupportUrlForListenItem:(id)arg1 categoryItem:(id)arg2;
+ (_Bool)isQQMusicAppId:(id)arg1;
+ (void)openContactInfoView:(id)arg1;
+ (id)getProfileContactWithUsername:(id)arg1;
+ (void)openProfileLogicWithUsername:(id)arg1;
+ (_Bool)shouldWaitForDurationAvailable:(id)arg1;
+ (id)md5StringFromInput:(id)arg1;
+ (id)descriptionForPlayMode:(int)arg1;
+ (id)tingPlayerStatusString:(int)arg1;
+ (id)tingPlayerEventString:(int)arg1;
+ (_Bool)isPlayingOrLoadingStatus:(int)arg1;
+ (_Bool)isTingPlayAppPlayingOrLoading;
+ (_Bool)isTingPlayersPlayingOrLoading;
+ (id)musicSourceNameWithAppId:(id)arg1;
+ (id)musicTranslucentIconForAppId:(id)arg1;
+ (id)displayDurationString:(int)arg1;
+ (int)correctedDuration:(int)arg1;
+ (id)durationString:(int)arg1;
+ (id)countString:(int)arg1;
+ (void)playFeedback;
+ (id)descStringForCategoryItemDesc:(id)arg1;
+ (id)categoryItemTypeString:(int)arg1;
+ (id)logTitleForTingItem:(id)arg1;
+ (id)listenItemTypeString:(int)arg1;
+ (_Bool)isFromAlbumPageWithExtJSON:(id)arg1;
+ (_Bool)isFromAlbumPageWithExtInfo:(id)arg1;
+ (id)extJSONFrom:(id)arg1;
+ (id)defaultThumbnail:(_Bool)arg1;
+ (id)defaultThumbnailForListenItem:(id)arg1;
+ (id)defaultTingPlayerNonMusicImageForSize:(struct CGSize)arg1;
+ (id)defaultTingPlayerImageForSize:(struct CGSize)arg1;
+ (id)defaultImageInDarkmodeForSize:(struct CGSize)arg1;
+ (id)defaultImageInLightmodeForSize:(struct CGSize)arg1;
+ (id)defaultAudioCoverPlaceholder;
+ (id)defaultImageForSize:(struct CGSize)arg1;
+ (id)defaultImage;

@end

