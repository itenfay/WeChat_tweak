//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVCOnDemandPreprocManager : NSObject
{
    SharedPtr_b1b13439 _backingService;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (SharedPtr_6de59d61)prepareTask:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelProcessingTask:(id)arg1;
- (id)sendProcessingTask:(id)arg1 withTaskPrepareCompletionHandler:(CDUnknownBlockType)arg2 taskStateUpdateHandler:(CDUnknownBlockType)arg3;
- (id)initWithBackingService:(SharedPtr_b1b13439)arg1;

@end

