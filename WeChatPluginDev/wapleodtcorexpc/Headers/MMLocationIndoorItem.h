//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QIndoorInfo;

@interface MMLocationIndoorItem : NSObject
{
    QIndoorInfo *_indoorInfo;
    struct CLLocationCoordinate2D _location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QIndoorInfo *indoorInfo; // @synthesize indoorInfo=_indoorInfo;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;

@end

