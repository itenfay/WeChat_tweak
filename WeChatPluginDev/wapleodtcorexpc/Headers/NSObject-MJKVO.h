//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (MJKVO)
- (void)mj_unobserveAll;
- (void)mj_unobserve:(id)arg1;
- (void)mj_unobserve:(id)arg1 keyPath:(id)arg2;
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 notifyUntilChanged:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)mj_observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
@end

