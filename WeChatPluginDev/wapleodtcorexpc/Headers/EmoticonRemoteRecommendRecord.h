//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface EmoticonRemoteRecommendRecord : NSObject
{
    unsigned int _lastUpdateTime;
    NSString *_query;
    NSMutableArray *_wrapList;
    NSString *_recSessionId;
}

+ (void)initialize;
+ (void)PBArrayAdd_recSessionId;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_wrapList;
+ (void)PBArrayAdd_query;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recSessionId; // @synthesize recSessionId=_recSessionId;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *wrapList; // @synthesize wrapList=_wrapList;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (_Bool)isExpired:(unsigned int)arg1;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

