//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAMapUtils : NSObject
{
}

+ (struct CLLocationCoordinate2D)ParseCoord:(id)arg1;
+ (id)DictionaryFromLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)DictionaryFromLocation:(id)arg1;
+ (id)SafeNumber:(double)arg1 To:(double)arg2;
+ (id)SafeNumber:(double)arg1;

@end

