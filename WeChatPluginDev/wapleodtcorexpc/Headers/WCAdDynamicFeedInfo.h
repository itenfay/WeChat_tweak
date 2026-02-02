//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAdDynamicFeedConfigInfo, WCAdDynamicFeedElementInfo, WCAdDynamicFeedTemplateExtraInfo;

@interface WCAdDynamicFeedInfo : NSObject
{
    WCAdDynamicFeedElementInfo *_rootElementInfo;
    NSArray *_animations;
    WCAdDynamicFeedConfigInfo *_configInfo;
    WCAdDynamicFeedTemplateExtraInfo *_templateExtraInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3 influentData:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicFeedTemplateExtraInfo *templateExtraInfo; // @synthesize templateExtraInfo=_templateExtraInfo;
@property(retain, nonatomic) WCAdDynamicFeedConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *rootElementInfo; // @synthesize rootElementInfo=_rootElementInfo;
- (void)processWithInfluentData:(id)arg1;
- (_Bool)isContainerClickableWith:(id)arg1;
- (_Bool)isVersionValid;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

