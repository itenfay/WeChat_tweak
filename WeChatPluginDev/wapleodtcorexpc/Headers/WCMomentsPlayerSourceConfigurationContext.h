//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentsPlayerSourceConfigurationContext : NSObject
{
    _Bool _Values_switchSourceEnabled;
    _Bool _Values_previewsLDForWSFeeds;
    _Bool _Values_canPlayHDRVideos;
    _Bool _Results_canSwitchSource;
    long long _Values_previewSourceMode;
    long long _Values_previewMediaSourceForKaraFallback;
    long long _Results_previewSourceMode;
}

@property(nonatomic) long long Results_previewSourceMode; // @synthesize Results_previewSourceMode=_Results_previewSourceMode;
@property(nonatomic) _Bool Results_canSwitchSource; // @synthesize Results_canSwitchSource=_Results_canSwitchSource;
@property(nonatomic) _Bool Values_canPlayHDRVideos; // @synthesize Values_canPlayHDRVideos=_Values_canPlayHDRVideos;
@property(nonatomic) long long Values_previewMediaSourceForKaraFallback; // @synthesize Values_previewMediaSourceForKaraFallback=_Values_previewMediaSourceForKaraFallback;
@property(nonatomic) _Bool Values_previewsLDForWSFeeds; // @synthesize Values_previewsLDForWSFeeds=_Values_previewsLDForWSFeeds;
@property(nonatomic) long long Values_previewSourceMode; // @synthesize Values_previewSourceMode=_Values_previewSourceMode;
@property(nonatomic) _Bool Values_switchSourceEnabled; // @synthesize Values_switchSourceEnabled=_Values_switchSourceEnabled;

@end

