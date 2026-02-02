//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementPromotionInfo : NSObject
{
    WCAdDynamicFeedElementValue *_backgroundColor;
    WCAdDynamicFeedElementValue *_leftTextColor;
    WCAdDynamicFeedElementValue *_rightTextColor;
    WCAdDynamicFeedElementValue *_rightNumberColor;
    WCAdDynamicFeedElementValue *_rightNumberBackgroundColor;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *rightNumberBackgroundColor; // @synthesize rightNumberBackgroundColor=_rightNumberBackgroundColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *rightNumberColor; // @synthesize rightNumberColor=_rightNumberColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *rightTextColor; // @synthesize rightTextColor=_rightTextColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *leftTextColor; // @synthesize leftTextColor=_leftTextColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

