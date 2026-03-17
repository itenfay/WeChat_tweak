//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXLocationObject : NSObject
{
    double lat;
    double lng;
}

+ (id)object;
@property(nonatomic) double lng; // @synthesize lng;
@property(nonatomic) double lat; // @synthesize lat;
- (id)init;

@end

