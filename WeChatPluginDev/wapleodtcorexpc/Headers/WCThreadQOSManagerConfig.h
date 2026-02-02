//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCThreadQOSManagerConfig : NSObject
{
    _Bool _enabled;
    int _strategy;
    NSMutableArray *_whiteListThreads;
    NSMutableArray *_blackListThreads;
}

+ (void)initialize;
+ (void)PBArrayAdd_blackListThreads;
+ (void)PBArrayAdd_whiteListThreads;
+ (void)PBArrayAdd_strategy;
+ (void)PBArrayAdd_enabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *blackListThreads; // @synthesize blackListThreads=_blackListThreads;
@property(retain, nonatomic) NSMutableArray *whiteListThreads; // @synthesize whiteListThreads=_whiteListThreads;
@property(nonatomic) int strategy; // @synthesize strategy=_strategy;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)updateWithXLabConfig:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

