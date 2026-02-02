//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QBaseVisualLayerManager, QLayerCommonData, QMapRepeatTimer, QVisLayerPayload;
@protocol QVisualLayerDelegate;

@interface QVisualLayer : NSObject
{
    _Bool _visible;
    _Bool _isAdded;
    _Bool _toUpdateModelData;
    int _zIndex;
    int _modelPedestalRectCount;
    NSString *_layerID;
    double _opacity;
    id <QVisualLayerDelegate> _delegate;
    double _interval;
    QMapRepeatTimer *_repeater;
    QBaseVisualLayerManager *_manager;
    NSString *_modelCachePath;
    QLayerCommonData *_commonData;
    QVisLayerPayload *_payload;
    NSString *_modelFolder;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *modelFolder; // @synthesize modelFolder=_modelFolder;
@property(retain, nonatomic) QVisLayerPayload *payload; // @synthesize payload=_payload;
@property(nonatomic) int modelPedestalRectCount; // @synthesize modelPedestalRectCount=_modelPedestalRectCount;
@property(nonatomic) _Bool toUpdateModelData; // @synthesize toUpdateModelData=_toUpdateModelData;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(retain, nonatomic) QLayerCommonData *commonData; // @synthesize commonData=_commonData;
@property(copy, nonatomic) NSString *modelCachePath; // @synthesize modelCachePath=_modelCachePath;
@property(nonatomic) __weak QBaseVisualLayerManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) QMapRepeatTimer *repeater; // @synthesize repeater=_repeater;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) __weak id <QVisualLayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(copy, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (id)clone;
- (id)initWithUID:(id)arg1;
- (id)getOriginalLayerId;
- (id)duplicateLayerID;
- (void)clearCache;
- (void)onLog:(id)arg1 andLevel:(int)arg2;
- (void)onLoadCompleteWithError:(id)arg1;
- (void)invalidateTimer;
- (void)startTimer:(double)arg1;
- (void)onLayerLoadEventError:(id)arg1;
- (void)glOverlay:(id)arg1 loadStatus:(long long)arg2 withProgress:(double)arg3;
- (void)notifyGPLayerLoadEventError:(long long)arg1 msg:(id)arg2;
- (void)glOverlay:(id)arg1 didTap:(id)arg2;
- (void)glOverlay:(id)arg1 translateAnimationDidComplete:(_Bool)arg2;
- (void)sendEvent:(id)arg1;
- (id)executeCommand:(id)arg1 commandJson:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

