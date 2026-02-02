//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QVectorHeatAggregationUnit : NSObject
{
    float _intensity;
    NSArray *_nodeIndices;
    struct CLLocationCoordinate2D _center;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nodeIndices; // @synthesize nodeIndices=_nodeIndices;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(nonatomic) struct CLLocationCoordinate2D center; // @synthesize center=_center;

@end

