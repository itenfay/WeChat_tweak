//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (WCAop)
+ (void)WCAop_removeBlockOfSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3;
+ (unsigned long long)WCAop_hookSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3 usingBlock:(id)arg4;
- (void)WCAop_removeBlockOfSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3;
- (unsigned long long)WCAop_hookSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 withTag:(id)arg3 usingBlock:(id)arg4;
@end

