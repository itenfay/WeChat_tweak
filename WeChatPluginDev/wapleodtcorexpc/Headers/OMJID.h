//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJID : NSObject
{
    struct XID _backingID;
}

+ (id)uniqueID;
+ (id)nullID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDString;
@property(readonly, nonatomic) const void *backingID;
@property(readonly, nonatomic) _Bool isNull;
- (id)initWithBackingID:(const void *)arg1;

@end

