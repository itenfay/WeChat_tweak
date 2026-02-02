//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface WXGRoamPackageHandler : NSObject
{
    NSRecursiveLock *_handlerLock;
    unsigned long long _msgListTotalSizeLimit;
    NSMutableDictionary *_producerMap;
}

+ (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
+ (unsigned long long)mediaFiltered:(id)arg1 svrIDs:(id)arg2 mediaIDs:(id)arg3 mediaTypes:(id)arg4 resWithFilteredList:(id)arg5;
+ (id)convertFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *producerMap; // @synthesize producerMap=_producerMap;
@property(nonatomic) unsigned long long msgListTotalSizeLimit; // @synthesize msgListTotalSizeLimit=_msgListTotalSizeLimit;
@property(retain, nonatomic) NSRecursiveLock *handlerLock; // @synthesize handlerLock=_handlerLock;
- (id)getRoamPackage:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5;
- (id)init;

@end

