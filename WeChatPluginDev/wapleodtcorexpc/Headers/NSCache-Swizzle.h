//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSCache.h>

@interface NSCache (Swizzle)
+ (void)load;
- (void)mmRemoveObjectForKey:(id)arg1;
- (void)mmSetObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
@end

