//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QOverlayObject : NSObject
{
    NSString *_identifier;
    NSString *_name;
    struct CLLocationCoordinate2D _clickedPosition;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CLLocationCoordinate2D clickedPosition; // @synthesize clickedPosition=_clickedPosition;

@end

