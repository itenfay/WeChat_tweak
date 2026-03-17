//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJSegmentLayerSpatialInfo : NSObject
{
    float _layerRotation;
    struct CGPoint _layerPosition;
    struct CGPoint _layerScale;
}

@property(nonatomic) float layerRotation; // @synthesize layerRotation=_layerRotation;
@property(nonatomic) struct CGPoint layerScale; // @synthesize layerScale=_layerScale;
@property(nonatomic) struct CGPoint layerPosition; // @synthesize layerPosition=_layerPosition;
- (id)initWithLayerPosition:(struct CGPoint)arg1 layerScale:(struct CGPoint)arg2 layerRotation:(float)arg3;

@end

