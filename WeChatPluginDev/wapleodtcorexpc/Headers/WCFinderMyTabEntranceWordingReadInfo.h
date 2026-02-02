//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderMyTabEntranceWordingReadInfo : NSObject
{
    NSMutableDictionary *_readTimeMap;
    NSMutableDictionary *_profimeReadTimeMap;
}

+ (void)initialize;
+ (void)PBArrayAdd_profimeReadTimeMap;
+ (void)PBArrayAdd_readTimeMap;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *profimeReadTimeMap; // @synthesize profimeReadTimeMap=_profimeReadTimeMap;
@property(retain, nonatomic) NSMutableDictionary *readTimeMap; // @synthesize readTimeMap=_readTimeMap;
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

