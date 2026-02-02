//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface FWFNSHttpCookieData : NSObject
{
    NSArray *_propertyKeys;
    NSArray *_propertyValues;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithPropertyKeys:(id)arg1 propertyValues:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(retain, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
- (id)toMap;

@end

