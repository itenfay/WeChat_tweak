//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLHeading, CLLocation;

@interface QUserLocation : NSObject
{
    CLLocation *_location;
    CLHeading *_heading;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;

@end

