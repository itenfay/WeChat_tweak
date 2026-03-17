//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMainThreadHandler : NSObject
{
    struct _opaque_pthread_mutex_t m_threadLock;
    int m_cycleArrayCount;
    unsigned long long **m_mainThreadStackCycleArray;
    unsigned long long *m_mainThreadStackCount;
    unsigned long long m_tailPoint;
    unsigned long long *m_topStackAddressRepeatArray;
    int *m_mainThreadStackRepeatCountArray;
}

+ (unsigned int)p_findRepeatCountInStack:(unsigned long long *)arg1 withAddr:(unsigned long long)arg2;
- (unsigned long long)getStackMaxCount;
- (unsigned int)p_findRepeatCountInArrayWithAddr:(unsigned long long)arg1;
- (struct KSStackCursor **)getAllStackCursorWithReturnSize:(unsigned long long *)arg1;
- (struct KSStackCursor **)getStackCursorWithLimit:(int)arg1 withReturnSize:(unsigned long long *)arg2;
- (int *)getPointStackRepeatCount;
- (struct KSStackCursor *)getPointStackCursor;
- (id)makeStackProfile;
- (unsigned long long *)getLastMainThreadStack;
- (unsigned long long)getLastMainThreadStackCount;
- (void)addThreadStack:(unsigned long long *)arg1 andStackCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCycleArrayCount:(int)arg1;

@end

