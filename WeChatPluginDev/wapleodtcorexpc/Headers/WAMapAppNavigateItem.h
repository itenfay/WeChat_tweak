//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMapAppNavigateItem : NSObject
{
    NSString *_name;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isNameOnly;
- (id)init;

@end

