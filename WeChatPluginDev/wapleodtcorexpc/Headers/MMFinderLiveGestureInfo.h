//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGestureInfo, NSString, UIColor;

@interface MMFinderLiveGestureInfo : NSObject
{
    NSString *_gestureId;
    double _maxRotationAngleInRadius;
    double _renderScale;
    UIColor *_overlayTextStrokeColor;
    NSString *_colorIconPath;
    NSString *_darkModeMonochromeIconPath;
    NSString *_lightModeMonochromeIconPath;
    NSString *_hintIconPath;
    NSString *_luaScriptPath;
    NSString *_primaryPagPath;
    NSString *_giftingPagPath;
    NSString *_primaryWeVisionRenderLuaPath;
    NSString *_giftingWeVisionRenderLuaPath;
    NSString *_soundEffectPath;
    FinderLiveGestureInfo *_gestureInfo;
    NSString *_resourceBasePath;
    NSString *_iconBasePath;
    NSString *_hintIconBasePath;
    NSString *_anchorResourceBasePath;
    NSString *_renderingResourceBasePath;
    NSString *_downloadTempPath;
    id _resourceDownloader;
    struct CGPoint _overlayTextRelativeCenter;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)gestureInfoWithModel:(id)arg1;
+ (void)clearResourcesForGestureWithIdStr:(id)arg1;
+ (void)clearResourcesForGestureWithId:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id resourceDownloader; // @synthesize resourceDownloader=_resourceDownloader;
@property(retain, nonatomic) NSString *downloadTempPath; // @synthesize downloadTempPath=_downloadTempPath;
@property(retain, nonatomic) NSString *renderingResourceBasePath; // @synthesize renderingResourceBasePath=_renderingResourceBasePath;
@property(retain, nonatomic) NSString *anchorResourceBasePath; // @synthesize anchorResourceBasePath=_anchorResourceBasePath;
@property(retain, nonatomic) NSString *hintIconBasePath; // @synthesize hintIconBasePath=_hintIconBasePath;
@property(retain, nonatomic) NSString *iconBasePath; // @synthesize iconBasePath=_iconBasePath;
@property(retain, nonatomic) NSString *resourceBasePath; // @synthesize resourceBasePath=_resourceBasePath;
@property(retain, nonatomic) FinderLiveGestureInfo *gestureInfo; // @synthesize gestureInfo=_gestureInfo;
@property(retain, nonatomic) NSString *soundEffectPath; // @synthesize soundEffectPath=_soundEffectPath;
@property(retain, nonatomic) NSString *giftingWeVisionRenderLuaPath; // @synthesize giftingWeVisionRenderLuaPath=_giftingWeVisionRenderLuaPath;
@property(retain, nonatomic) NSString *primaryWeVisionRenderLuaPath; // @synthesize primaryWeVisionRenderLuaPath=_primaryWeVisionRenderLuaPath;
@property(retain, nonatomic) NSString *giftingPagPath; // @synthesize giftingPagPath=_giftingPagPath;
@property(retain, nonatomic) NSString *primaryPagPath; // @synthesize primaryPagPath=_primaryPagPath;
@property(retain, nonatomic) NSString *luaScriptPath; // @synthesize luaScriptPath=_luaScriptPath;
@property(retain, nonatomic) NSString *hintIconPath; // @synthesize hintIconPath=_hintIconPath;
@property(retain, nonatomic) NSString *lightModeMonochromeIconPath; // @synthesize lightModeMonochromeIconPath=_lightModeMonochromeIconPath;
@property(retain, nonatomic) NSString *darkModeMonochromeIconPath; // @synthesize darkModeMonochromeIconPath=_darkModeMonochromeIconPath;
@property(retain, nonatomic) NSString *colorIconPath; // @synthesize colorIconPath=_colorIconPath;
@property(nonatomic) struct CGPoint overlayTextRelativeCenter; // @synthesize overlayTextRelativeCenter=_overlayTextRelativeCenter;
@property(retain, nonatomic) UIColor *overlayTextStrokeColor; // @synthesize overlayTextStrokeColor=_overlayTextStrokeColor;
@property(nonatomic) double renderScale; // @synthesize renderScale=_renderScale;
@property(nonatomic) double maxRotationAngleInRadius; // @synthesize maxRotationAngleInRadius=_maxRotationAngleInRadius;
@property(retain, nonatomic) NSString *gestureId; // @synthesize gestureId=_gestureId;
- (id)archivedWCTValue;
@property(readonly, nonatomic) FinderLiveGestureInfo *stub;
@property(readonly, nonatomic) unsigned int displayOrder;
@property(readonly, nonatomic) _Bool luaSupported;
@property(readonly, nonatomic) unsigned long long maxSdkVersion;
@property(readonly, nonatomic) unsigned long long minSdkVersion;
@property(readonly, nonatomic) double overlayTextDisappearTime;
@property(readonly, nonatomic) double overlayTextAppearTime;
@property(readonly, nonatomic) unsigned long long overlayTextFontSize;
@property(readonly, nonatomic) unsigned long long renderMode;
@property(readonly, nonatomic) double minRenderSize;
@property(readonly, nonatomic) NSString *giftingHintText;
@property(readonly, nonatomic) NSString *hintText;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int version;
- (id)initWithGestureInfo:(id)arg1;
- (void)clearResources;
- (_Bool)validateResources;
- (void)loadResourcesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)resourcesDifferentFromUpdateDirective:(id)arg1;

@end

