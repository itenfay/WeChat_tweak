//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAMetalLayer, FlutterMetalLayer, FlutterTexture, NSString;
@protocol MTLTexture;

@interface FlutterDrawable : NSObject
{
    FlutterTexture *_texture;
    FlutterMetalLayer *_layer;
    unsigned long long _drawableId;
    _Bool _presented;
}

- (void).cxx_destruct;
- (void)flutterPrepareForPresent:(id)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)present;
@property(readonly, nonatomic) double presentedTime;
@property(readonly, nonatomic) unsigned long long drawableID;
@property(readonly) CAMetalLayer *layer;
@property(readonly) id <MTLTexture> texture;
- (id)initWithTexture:(id)arg1 layer:(id)arg2 drawableId:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

