//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdDynamicFeedAnimationInfo : NSObject
{
    NSString *_animationId;
    NSString *_event;
    double _commonStartDelay;
    double _commonDuration;
    NSString *_commonInterpolator;
    NSArray *_modifiedProperty;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *modifiedProperty; // @synthesize modifiedProperty=_modifiedProperty;
@property(retain, nonatomic) NSString *commonInterpolator; // @synthesize commonInterpolator=_commonInterpolator;
@property(nonatomic) double commonDuration; // @synthesize commonDuration=_commonDuration;
@property(nonatomic) double commonStartDelay; // @synthesize commonStartDelay=_commonStartDelay;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *animationId; // @synthesize animationId=_animationId;
- (void)resetPropertyWithPropertyName:(id)arg1;
- (void)resetPropertiesWithInfluentAnimation:(id)arg1;
- (void)mergeInfoWithInfluentAnimation:(id)arg1;
- (void)processWithInfluentAnimations:(id)arg1;
- (_Bool)parseModifiedPropertiesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

