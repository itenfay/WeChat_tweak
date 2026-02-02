//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QPointEventRequestData : NSObject
{
    float _zoomLevel;
    NSString *_bounds;
    struct CLLocationCoordinate2D _location;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) NSString *bounds; // @synthesize bounds=_bounds;

@end

