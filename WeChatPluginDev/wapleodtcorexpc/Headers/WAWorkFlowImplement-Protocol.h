//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol WAWorkFlowImplement;

@protocol WAWorkFlowImplement <NSObject>
- (void)cancel;
- (void)runWithContext:(id)arg1 completeHandler:(void (^)(_Bool, NSString *))arg2;
- (void)addStepSubWorkFlow:(id <WAWorkFlowImplement>)arg1;
- (void)addStepName:(NSString *)arg1 block:(void (^)(id, void (^)(_Bool, NSString *)))arg2;
- (NSString *)workFlowName;
- (id)initWithName:(NSString *)arg1;
@end

