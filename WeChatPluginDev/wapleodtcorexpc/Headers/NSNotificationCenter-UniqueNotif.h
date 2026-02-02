//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (UniqueNotif)
+ (void)initialize;
- (void)addUniqueObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)mmRemoveTokenListByObserver:(id)arg1;
- (id)mmTokenListByObserver:(id)arg1;
- (id)mmObserverDict;
@end

