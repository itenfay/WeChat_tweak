//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSJSONSerialization.h>

@interface NSJSONSerialization (Swizzle)
+ (id)mmJSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)load;
@end

