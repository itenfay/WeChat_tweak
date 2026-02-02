//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSString;

@interface WACgiProxy : NSObject
{
    NSMapTable *_mapTable;
    NSLock *_lock;
}

+ (void)invalidateAllRequest;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (unsigned int)sendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
- (id)convertWACgiProfileInfoFromProtobufCgiProFile:(id)arg1;
- (void)reportCostTimeWithWrap:(id)arg1 pbCGIWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)invalidateAllRequest;
- (void)cancelCgiRequest:(unsigned int)arg1;
- (unsigned int)sendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)innerSendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_requestForEventId:(unsigned int)arg1;
- (id)_removeAllRequest;
- (void)_removeRequestForEventId:(unsigned int)arg1;
- (void)_addRequest:(id)arg1 forEventId:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

