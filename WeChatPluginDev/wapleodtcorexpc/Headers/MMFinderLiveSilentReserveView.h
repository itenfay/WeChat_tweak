//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveReserveViewModel, NSString;

@interface MMFinderLiveSilentReserveView : UIView
{
    CDUnknownBlockType _jsapiSuccessBlock;
    MMFinderLiveReserveViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReserveViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType jsapiSuccessBlock; // @synthesize jsapiSuccessBlock=_jsapiSuccessBlock;
- (void)onViewModelWorkFinished;
- (void)onNeedDismissView;
- (void)reserveSilently;
@property(retain, nonatomic) NSString *cancelReserveFailedToastContent;
@property(retain, nonatomic) NSString *cancelReserveSucceededToastContent;
@property(retain, nonatomic) NSString *reserveFailedToastContent;
@property(retain, nonatomic) NSString *reserveSucceededToastContent;
- (void)setReportCommentScene:(id)arg1 sceneNote:(id)arg2 noticeBussinessDic:(id)arg3;
- (id)initWithGetLiveNoticeResponse:(id)arg1 fromVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

