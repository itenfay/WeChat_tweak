//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BTMsgMgrCanvasCardExposedInfo : NSObject
{
    NSMutableDictionary *_dictFirstExposedCardInToday;
    unsigned long long _lastFirstExposedTimeMs;
    NSMutableDictionary *_dicMsgId2TraceId;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicMsgId2TraceId;
+ (void)PBArrayAdd_lastFirstExposedTimeMs;
+ (void)PBArrayAdd_dictFirstExposedCardInToday;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMsgId2TraceId; // @synthesize dicMsgId2TraceId=_dicMsgId2TraceId;
@property(nonatomic) unsigned long long lastFirstExposedTimeMs; // @synthesize lastFirstExposedTimeMs=_lastFirstExposedTimeMs;
@property(retain, nonatomic) NSMutableDictionary *dictFirstExposedCardInToday; // @synthesize dictFirstExposedCardInToday=_dictFirstExposedCardInToday;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

