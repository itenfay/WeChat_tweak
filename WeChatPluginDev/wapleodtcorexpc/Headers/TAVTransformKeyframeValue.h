//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVTransformKeyframeValue : NSObject
{
    float _scale;
    float _rotation;
    struct CGPoint _translation;
}

+ (id)applyEffectToSourceImage:(id)arg1 param:(id)arg2;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

