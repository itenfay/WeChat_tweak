//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGestureWeVisionRenderParams : NSObject
{
    NSString *_gestureId;
    NSString *_instanceId;
    double _translationX;
    double _translationY;
    double _rotation;
    double _scale;
}

- (void).cxx_destruct;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double translationY; // @synthesize translationY=_translationY;
@property(nonatomic) double translationX; // @synthesize translationX=_translationX;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSString *gestureId; // @synthesize gestureId=_gestureId;
- (id)description;

@end

