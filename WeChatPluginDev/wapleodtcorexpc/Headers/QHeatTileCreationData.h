//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, QQuadTree;

@interface QHeatTileCreationData : NSObject
{
    CDStruct_c519178c _bounds;
    unsigned long long _decayRadius;
    unsigned long long _minimumZoomIntensity;
    unsigned long long _maximumZoomIntensity;
    NSArray *_colorMap;
    NSArray *_maxIntensities;
    NSArray *_kernel;
    QQuadTree *_quadTree;
}

- (void).cxx_destruct;

@end

