//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol FlutterTextureRegistry;

@interface FLTFrameUpdater : NSObject
{
    long long _textureId;
    NSObject<FlutterTextureRegistry> *_registry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
- (void)onDisplayLink:(id)arg1;
- (id)initWithRegistry:(id)arg1;

@end

