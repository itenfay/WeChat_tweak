//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol QGLOverlayDelegate, QOverlayProtocol;

@interface QGLOverlay
{
    _Bool _visible;
    _Bool _interactive;
    _Bool _drawn;
    _Bool _dirty;
    int _zIndex;
    int _minZoomLevel;
    int _maxZoomLevel;
    long long _displayLevel;
    id <QGLOverlayDelegate> _delegate;
    double _opacity;
    void *_impl;
    void *_layerListener;
    id <QOverlayProtocol> _containerDelegate;
}

+ (_Bool)validateStartPoints:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) _Bool drawn; // @synthesize drawn=_drawn;
@property(nonatomic) __weak id <QOverlayProtocol> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) void *layerListener; // @synthesize layerListener=_layerListener;
@property(nonatomic) void *impl; // @synthesize impl=_impl;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic) int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <QGLOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifOverlayDidTapWithOverlayObject:(id)arg1;
- (void)startTranslateAnimation:(id)arg1 duration:(double)arg2 initRotation:(double)arg3 autoRotate:(_Bool)arg4;
- (void)recordGLoverlayCount:(id)arg1;
- (_Bool)validateDisplayLevelParam:(long long)arg1;
- (long long)displayLevelForLayerLevel:(int)arg1;
- (int)layerLevelForDisplayLevel:(long long)arg1;
- (void)doUpdateIndex:(void *)arg1;
- (void)doUpdateLevel:(void *)arg1;
- (void)notifyOverlayProgress:(double)arg1 hasError:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (double)glPointRatio;
- (struct CGPoint)glVertexForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (float *)glProjectionMatrix;
- (float *)glViewMatrix;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (void)setNeedsDisplay;
- (void)render;
- (void)makeDirty;
- (_Bool)isSupportClick;
- (id)getType;
- (void)setMinZoomLevel:(int)arg1 maxZoomLevel:(int)arg2;
- (void)destoryImpl;
- (void *)createImpl;
- (void)drawCallback;
@property(readonly, nonatomic) double screenScale;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
- (void)setZoomLevelRange:(id)arg1 error:(id *)arg2;
- (id)getClickEnabled:(id)arg1 error:(id *)arg2;
- (void)enableClick:(id)arg1 error:(id *)arg2;
- (id)getVisible:(id)arg1 error:(id *)arg2;
- (void)setVisible:(id)arg1 error:(id *)arg2;
- (id)getType:(id)arg1 error:(id *)arg2;
- (id)executeCommand:(id)arg1 commandJson:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

