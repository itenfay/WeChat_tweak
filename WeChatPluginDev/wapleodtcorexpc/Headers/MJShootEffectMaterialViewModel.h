//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJShootComposingViewModel, NSString;

@interface MJShootEffectMaterialViewModel : NSObject
{
    MJShootComposingViewModel *_shootComposingVM;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MJShootComposingViewModel *shootComposingVM; // @synthesize shootComposingVM=_shootComposingVM;
- (void)loadingStatusForID:(id)arg1 threadSafetyHandler:(CDUnknownBlockType)arg2;
- (void)resetMaterialsLoadingStatus;
- (unsigned long long)mj_loadingStatusWithID:(id)arg1;
- (float)mj_loadingProgressWithID:(id)arg1;
- (void)mj_loadMaterialWithID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

