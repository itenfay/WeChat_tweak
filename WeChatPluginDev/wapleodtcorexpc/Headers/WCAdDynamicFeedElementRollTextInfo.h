//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementRollTextInfo : NSObject
{
    WCAdDynamicFeedElementValue *_backgroundColor;
    WCAdDynamicFeedElementValue *_textColor;
    NSString *_iconUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

