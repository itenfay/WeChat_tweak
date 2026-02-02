//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderMediaInfo;

@interface WCFinderFeedMediaWrapParam : NSObject
{
    _Bool _genArrDataSource;
    _Bool _useSystemPlayer;
    _Bool _ignoreCache;
    _Bool _ignoreSettingToCache;
    _Bool _forceUpdateMultiLevel;
    _Bool _ignoreHDR;
    int _scene;
    int _setMaxBitrate;
    NSString *_fileFormat;
    unsigned long long _liveCoverPreferredAspectRatio;
    WCFinderMediaInfo *_mediaInfo;
}

+ (id)defaultParamWithMediaInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreHDR; // @synthesize ignoreHDR=_ignoreHDR;
@property(nonatomic) _Bool forceUpdateMultiLevel; // @synthesize forceUpdateMultiLevel=_forceUpdateMultiLevel;
@property(nonatomic) int setMaxBitrate; // @synthesize setMaxBitrate=_setMaxBitrate;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool ignoreSettingToCache; // @synthesize ignoreSettingToCache=_ignoreSettingToCache;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) unsigned long long liveCoverPreferredAspectRatio; // @synthesize liveCoverPreferredAspectRatio=_liveCoverPreferredAspectRatio;
@property(nonatomic) _Bool useSystemPlayer; // @synthesize useSystemPlayer=_useSystemPlayer;
@property(nonatomic) _Bool genArrDataSource; // @synthesize genArrDataSource=_genArrDataSource;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;

@end

