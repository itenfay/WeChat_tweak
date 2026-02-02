//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QTrailNode : NSObject
{
    int _timeStamp;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end

