//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMapTable, NSMutableDictionary, NSString;

@interface WANativeViewPlugin : NSObject
{
    NSMapTable *_platformContainerViews;
    NSMapTable *_textureContainers;
    NSMutableDictionary *_nativeViews;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableDictionary *nativeViews; // @synthesize nativeViews=_nativeViews;
@property(retain, nonatomic) NSMapTable *textureContainers; // @synthesize textureContainers=_textureContainers;
@property(retain, nonatomic) NSMapTable *platformContainerViews; // @synthesize platformContainerViews=_platformContainerViews;
- (void)handleNativeViewPointerEvent:(id)arg1;
- (void)invalidateDisplayLink;
- (void)refreshDisplay;
- (void)updateDisplayLink;
- (id)removeTextureContainer:(long long)arg1;
- (void)addTextureContainer:(id)arg1;
- (void)removeNativeView:(long long)arg1;
- (void)insertNativeView:(id)arg1 viewId:(long long)arg2;
- (id)createArgsCodec;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (void)registerEngine:(id)arg1;
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

