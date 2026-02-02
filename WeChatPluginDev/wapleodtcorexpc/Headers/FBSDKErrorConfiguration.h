//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBSDKErrorConfiguration : NSObject
{
    NSMutableDictionary *_configurationDictionary;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseArray:(id)arg1;
- (id)recoveryConfigurationForCode:(id)arg1 subcode:(id)arg2 request:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

