//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UnitRCWeakObj : NSObject
{
    id objcStrong;
    id objcWeak;
}

+ (id)initWithObj:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)lock;

@end

