//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveGiftResourceDescriptor : NSObject
{
    NSString *_giftId;
    NSString *_resourceId;
    long long _resourceType;
}

+ (id)descriptorForGiftId:(id)arg1 resourceId:(id)arg2 resourceType:(long long)arg3;
+ (id)descriptorForGiftId:(id)arg1 resourceType:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;

@end

