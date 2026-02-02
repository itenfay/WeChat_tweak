//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMResCheckResponseData : NSObject
{
    unsigned int _nextTime;
    NSData *_context;
}

+ (void)InvalidateCache;
+ (id)GetCached;
+ (_Bool)SaveData:(id)arg1;
+ (_Bool)SaveContext:(id)arg1 checkTime:(unsigned int)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_context;
+ (void)PBArrayAdd_nextTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
@property(nonatomic) unsigned int nextTime; // @synthesize nextTime=_nextTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

