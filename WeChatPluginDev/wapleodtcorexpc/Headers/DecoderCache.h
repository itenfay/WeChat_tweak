//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DecoderCache : NSObject
{
    int _currentId;
    NSMutableDictionary *_decoderMap;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)instance;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property int currentId; // @synthesize currentId=_currentId;
@property(retain) NSMutableDictionary *decoderMap; // @synthesize decoderMap=_decoderMap;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (int)generateId;

@end

