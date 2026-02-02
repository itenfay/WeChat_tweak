//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface BubbleManager : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleInfoDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)bubbleInfoWithType:(unsigned long long)arg1 position:(unsigned long long)arg2 isSender:(_Bool)arg3;
- (id)init;

@end

