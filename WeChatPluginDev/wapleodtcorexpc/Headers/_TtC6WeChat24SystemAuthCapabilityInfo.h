//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC6WeChat24SystemAuthCapabilityInfo : NSObject
{
    MISSING_TYPE *capability;
}

- (id)init;
- (_Bool)isOverSeaLocationSensitiveWithScene:(unsigned long long)arg1;
- (id)authorizeTipTitleFor:(unsigned long long)arg1;
@property(nonatomic, readonly) NSArray *bizInfos;
@property(nonatomic, readonly) NSString *instruction;
@property(nonatomic, readonly) NSString *settingPageDescription;
@property(nonatomic, readonly) NSString *imageName;
@property(nonatomic, readonly) NSString *name;
- (id)initWithCapability:(unsigned int)arg1;
@property(nonatomic, readonly) unsigned int capability; // @synthesize capability;

@end

