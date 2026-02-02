//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJTemplateComposingDelegateImpl : NSObject
{
}

- (id)phAssetsWithAssetInfos:(id)arg1;
- (void)_openMovieComposingInDirectlyWithDelegate:(id)arg1 contextVC:(id)arg2 sightDraft:(id)arg3 originalAssets:(id)arg4 publisher:(id)arg5 failedHandler:(CDUnknownBlockType)arg6;
- (void)openMovieComposingInDirectlyWithDelegate:(id)arg1 producerVC:(id)arg2 contextVC:(id)arg3 sightDraft:(id)arg4 isAsyncComposite:(_Bool)arg5 publisher:(id)arg6 failedHandler:(CDUnknownBlockType)arg7;
- (void)handleCancelActionWithProducerVC:(id)arg1 isCleanUpSuccessful:(_Bool)arg2 publisher:(id)arg3;
- (void)handleFinishActionWithProducerVC:(id)arg1 sightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3 publisher:(id)arg4 succeedHandler:(CDUnknownBlockType)arg5 failedHandler:(CDUnknownBlockType)arg6;

@end

