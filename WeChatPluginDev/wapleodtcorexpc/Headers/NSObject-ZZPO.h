//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NSObject (ZZPO)
- (id)zz_aopMap;
@property(readonly, nonatomic) NSMutableDictionary *zz_poMap;
- (id)getInvocationForSelector:(SEL)arg1;
- (id)getPropertyInvocationByName:(id)arg1;
- (void)_removeHookWithSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 tag:(id)arg3;
- (_Bool)_hookWithSelector:(SEL)arg1 atPosition:(unsigned long long)arg2 tag:(id)arg3 action:(id)arg4;
- (id)observerPropertyByName:(id)arg1 tag:(id)arg2 action:(id)arg3;
- (void)observerDeallocWithTag:(id)arg1 action:(CDUnknownBlockType)arg2;
@end

