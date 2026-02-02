//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, TPStrategyConfig;

@interface TPBaseStrategy : NSObject
{
    TPStrategyConfig *_config;
    NSArray *_contextList;
}

+ (id)strategyWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contextList; // @synthesize contextList=_contextList;
@property(retain, nonatomic) TPStrategyConfig *config; // @synthesize config=_config;
- (_Bool)isPlayerTypeValidForCurrentPlayerScene;
- (id)defultPlayerTypeList;
- (void)addStrategyContext:(id)arg1;
- (long long)playerTypeForRetry:(id)arg1;
- (long long)playerTypeForOpen:(id)arg1;
- (id)lastContext;
- (_Bool)shouldRetry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

