//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAdExpParamsInfo : NSObject
{
    NSArray *_params;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

