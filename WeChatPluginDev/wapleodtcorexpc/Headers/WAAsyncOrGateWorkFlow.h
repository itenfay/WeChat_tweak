//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAsyncOrGateWorkFlow
{
}

- (id)allStepInfoError;
- (_Bool)isAllStepFail;
- (void)onStepFinish:(id)arg1 isSuccess:(_Bool)arg2 error:(id)arg3;
- (void)runSteps;

@end

