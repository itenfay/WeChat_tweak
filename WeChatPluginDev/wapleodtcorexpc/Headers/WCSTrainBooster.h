//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCSTrainModelRoute;

@interface WCSTrainBooster : NSObject
{
    WCSTrainModelRoute *_entryRoute;
    NSMutableDictionary *_dicRoute;
    NSMutableDictionary *_dicRouteExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicRouteExt; // @synthesize dicRouteExt=_dicRouteExt;
@property(retain, nonatomic) NSMutableDictionary *dicRoute; // @synthesize dicRoute=_dicRoute;
@property(retain, nonatomic) WCSTrainModelRoute *entryRoute; // @synthesize entryRoute=_entryRoute;
- (double)passedHoursFromTimestamp:(unsigned int)arg1;
- (_Bool)applyCondition:(unsigned long long)arg1 leftOperand:(double)arg2 rightOperand:(double)arg3;
- (double)scoreByExtMode:(_Bool)arg1 outLeafNodeKeys:(id)arg2 features:(id)arg3;

@end

