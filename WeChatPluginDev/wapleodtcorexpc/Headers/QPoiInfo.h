//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QPoiInfo : NSObject
{
    NSString *_uid;
    NSString *_name;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;

@end

