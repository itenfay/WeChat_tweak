//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderReuseQueue : NSObject
{
    struct multimap<NSString *, NSObject *, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, NSObject *>>> reuseQueue;
    NSMutableDictionary *_registerInfos;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *registerInfos; // @synthesize registerInfos=_registerInfos;
- (void)enqueueObject:(id)arg1;
- (id)dequeueObject:(id)arg1;
- (struct WCFinderReuseConfig)registerClass:(Class)arg1 forIdentifier:(id)arg2;
- (id)init;

@end

