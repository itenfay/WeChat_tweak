//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KVOController;

@interface NSObject (KVO)
- (void)setKVOControllerNonRetaining:(id)arg1;
- (id)KVOControllerNonRetaining;
@property(retain, nonatomic) KVOController *KVOController;
- (void)UnobserveAll;
- (void)Unobserve:(id)arg1;
- (void)Unobserve:(id)arg1 keyPath:(id)arg2;
- (void)Observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)Observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
@end

