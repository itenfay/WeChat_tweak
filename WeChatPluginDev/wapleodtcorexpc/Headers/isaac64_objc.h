//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface isaac64_objc : NSObject
{
    unsigned long long randrsl[256];
    unsigned long long randcnt;
    unsigned long long mm[256];
    unsigned long long aa;
    unsigned long long bb;
    unsigned long long cc;
}

- (void)randinit:(int)arg1;
- (void)isaac64;
- (int)isaac64_init:(unsigned long long *)arg1 seedLen:(unsigned long long)arg2;
- (unsigned long long)isaac64_rand;
- (id)init;

@end

