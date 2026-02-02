//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementAutoSizeInfo : NSObject
{
    _Bool _enabled;
    NSArray *_properties;
    WCAdDynamicFeedElementValue *_minSize;
    WCAdDynamicFeedElementValue *_sizeStep;
    WCAdDynamicFeedElementValue *_maxSize;
    WCAdDynamicFeedElementValue *_maxSizeiOS;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *maxSizeiOS; // @synthesize maxSizeiOS=_maxSizeiOS;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *sizeStep; // @synthesize sizeStep=_sizeStep;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *minSize; // @synthesize minSize=_minSize;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

