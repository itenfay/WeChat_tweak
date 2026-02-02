//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

#import "PAGViewApi-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface FlutterPAGPlugin : NSObject <PAGViewApi>
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterPluginRegistrar> *_registrar;
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSMutableDictionary *_controllerMap;
}

+ (void)registerWithRegistrar:(id)arg1;
+ (void)registerWithRegistry:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *controllerMap; // @synthesize controllerMap=_controllerMap;
@property(readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar; // @synthesize registrar=_registrar;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (void)seekPagId:(id)arg1 timeMs:(id)arg2 error:(id *)arg3;
- (void)flushPagId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)flushPagId:(id)arg1 error:(id *)arg2;
- (id)setSolidLayerColorPagId:(id)arg1 name:(id)arg2 color:(id)arg3 error:(id *)arg4;
- (id)replaceImagePagId:(id)arg1 index:(id)arg2 filepath:(id)arg3 error:(id *)arg4;
- (void)pagViewReleasePagId:(id)arg1 error:(id *)arg2;
- (id)pagViewStopPagId:(id)arg1 error:(id *)arg2;
- (id)pagViewStartPlayPagId:(id)arg1 error:(id *)arg2;
- (void)createInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRegistry:(id)arg1 registrar:(id)arg2 messenger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

