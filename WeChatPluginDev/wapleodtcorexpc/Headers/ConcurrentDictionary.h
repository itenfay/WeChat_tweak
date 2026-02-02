//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ConcurrentDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)take:(id)arg1;
- (_Bool)has:(id)arg1;
- (void)remove:(id)arg1;
- (id)get:(id)arg1;
- (void)put:(id)arg1 forValue:(id)arg2;
- (id)init;

@end

