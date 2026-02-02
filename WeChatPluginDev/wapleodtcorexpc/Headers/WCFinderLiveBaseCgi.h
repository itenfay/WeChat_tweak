//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveBaseTask, NSString;
@protocol MMFinderLiveTaskFunctionPlugin;

@interface WCFinderLiveBaseCgi
{
    _Bool _isForbidCancelCGI;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_liveSessionKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForbidCancelCGI; // @synthesize isForbidCancelCGI=_isForbidCancelCGI;
@property(retain, nonatomic) NSString *liveSessionKey; // @synthesize liveSessionKey=_liveSessionKey;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> *liveTask;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)setRequest:(id)arg1;

@end

