//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QArcData : NSObject
{
    struct CLLocationCoordinate2D _startPoint;
    struct CLLocationCoordinate2D _endPoint;
}

@property(nonatomic) struct CLLocationCoordinate2D endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CLLocationCoordinate2D startPoint; // @synthesize startPoint=_startPoint;

@end

