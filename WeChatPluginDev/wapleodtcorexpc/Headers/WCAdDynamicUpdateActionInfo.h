//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdDynamicUpdateActionInfo : NSObject
{
    int _expireTime;
    NSString *_type;
}

- (void).cxx_destruct;
@property(nonatomic) int expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

