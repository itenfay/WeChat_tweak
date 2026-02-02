//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJSpatialInfo;

@interface OMJOverlayDesc : NSObject
{
    int _zIndex;
    OMJSpatialInfo *_spatialInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(retain, nonatomic) OMJSpatialInfo *spatialInfo; // @synthesize spatialInfo=_spatialInfo;
- (id)description;
- (id)initWithSpatialInfo:(id)arg1 zIndex:(int)arg2;
- (id)initWithSpatialInfo:(id)arg1;

@end

