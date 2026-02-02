//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, NSString, UIView, WATexturePlugin;
@protocol FlutterPluginRegistrar, WANativeViewTextureInterface;

@interface WATextureContainer : NSObject
{
    unsigned int _lastPixelFormatType;
    UIView<WANativeViewTextureInterface> *_nativeView;
    long long _viewId;
    WATexturePlugin *_plugin;
    NSObject<FlutterPluginRegistrar> *_registrar;
    long long _textureId;
    struct __CVBuffer *_availablePixelBuffer;
    double _scaleX;
    double _scaleY;
    CIContext *_ciContext;
    struct __CVBuffer *_ciContextOutBuffer;
    struct CGSize _ciContextOutBufferSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize ciContextOutBufferSize; // @synthesize ciContextOutBufferSize=_ciContextOutBufferSize;
@property(nonatomic) struct __CVBuffer *ciContextOutBuffer; // @synthesize ciContextOutBuffer=_ciContextOutBuffer;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(nonatomic) double scaleY; // @synthesize scaleY=_scaleY;
@property(nonatomic) double scaleX; // @synthesize scaleX=_scaleX;
@property(nonatomic) unsigned int lastPixelFormatType; // @synthesize lastPixelFormatType=_lastPixelFormatType;
@property(nonatomic) struct __CVBuffer *availablePixelBuffer; // @synthesize availablePixelBuffer=_availablePixelBuffer;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
@property(nonatomic) __weak NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(nonatomic) __weak WATexturePlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) UIView<WANativeViewTextureInterface> *nativeView; // @synthesize nativeView=_nativeView;
- (void)updateTextureScaleX:(double)arg1 scaleY:(double)arg2;
- (void)checkContentMode:(struct CGSize)arg1;
- (void)checkTextureAvailable;
- (void)onTextureUnregistered:(id)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

