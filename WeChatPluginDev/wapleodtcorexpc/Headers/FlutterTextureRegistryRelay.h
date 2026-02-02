//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol FlutterTextureRegistry;

@interface FlutterTextureRegistryRelay : NSObject
{
    NSObject<FlutterTextureRegistry> *_parent;
}

@property(nonatomic) NSObject<FlutterTextureRegistry> *parent; // @synthesize parent=_parent;
- (void)unregisterTexture:(long long)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (long long)registerTexture:(id)arg1;
- (id)initWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

