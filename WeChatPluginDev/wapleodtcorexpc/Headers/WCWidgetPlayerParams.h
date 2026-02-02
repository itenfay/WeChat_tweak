//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer, NSString, RecommendedMusicInfo, UIView;

@interface WCWidgetPlayerParams : NSObject
{
    _Bool _isBGMMusicMute;
    _Bool _isAutoReplay;
    _Bool _isAudioModuleEnabled;
    int _audioModuleScene;
    UIView *_overlayView;
    RecommendedMusicInfo *_bgmMusicInfo;
    CALayer *_overlayViewLayer;
    NSString *_audioModuleIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAudioModuleEnabled; // @synthesize isAudioModuleEnabled=_isAudioModuleEnabled;
@property(retain, nonatomic) NSString *audioModuleIdentifier; // @synthesize audioModuleIdentifier=_audioModuleIdentifier;
@property(retain, nonatomic) CALayer *overlayViewLayer; // @synthesize overlayViewLayer=_overlayViewLayer;
@property(nonatomic) int audioModuleScene; // @synthesize audioModuleScene=_audioModuleScene;
@property(nonatomic) _Bool isAutoReplay; // @synthesize isAutoReplay=_isAutoReplay;
@property(nonatomic) _Bool isBGMMusicMute; // @synthesize isBGMMusicMute=_isBGMMusicMute;
@property(retain, nonatomic) RecommendedMusicInfo *bgmMusicInfo; // @synthesize bgmMusicInfo=_bgmMusicInfo;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (_Bool)hasValidWidget;
- (id)description;
- (id)init;

@end

