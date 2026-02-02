//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface WCAdDynamicFeedInfluentDataInfo : NSObject
{
    NSDictionary *_influentElementInfos;
    NSDictionary *_influentAnimations;
    NSArray *_elementInfos;
    NSArray *_animations;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) NSArray *elementInfos; // @synthesize elementInfos=_elementInfos;
@property(retain, nonatomic) NSDictionary *influentAnimations; // @synthesize influentAnimations=_influentAnimations;
@property(retain, nonatomic) NSDictionary *influentElementInfos; // @synthesize influentElementInfos=_influentElementInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

