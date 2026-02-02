//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedAnimationPropertyValueInfo : NSObject
{
    _Bool _isValid;
    WCAdDynamicFeedElementValue *_numValue;
    UIColor *_colorExt;
    WCAdDynamicFeedElementValue *_color;
    WCAdDynamicFeedElementValue *_colorDark;
}

+ (_Bool)shouldValueParseAsColorWithName:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *colorDark; // @synthesize colorDark=_colorDark;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *color; // @synthesize color=_color;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) UIColor *colorExt; // @synthesize colorExt=_colorExt;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *numValue; // @synthesize numValue=_numValue;
- (_Bool)parsePropertyValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

