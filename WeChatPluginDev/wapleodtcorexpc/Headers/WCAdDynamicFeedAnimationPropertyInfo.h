//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdDynamicFeedAnimationPropertyValueInfo;

@interface WCAdDynamicFeedAnimationPropertyInfo : NSObject
{
    NSString *_name;
    WCAdDynamicFeedAnimationPropertyValueInfo *_fromValue;
    WCAdDynamicFeedAnimationPropertyValueInfo *_toValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedAnimationPropertyValueInfo *toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) WCAdDynamicFeedAnimationPropertyValueInfo *fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)parsePropertyValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

