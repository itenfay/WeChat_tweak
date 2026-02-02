//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineADLogicController : NSObject
{
    _Bool _canLogAdContext;
    id <WCTimelineLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCTimelineLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canLogAdContext; // @synthesize canLogAdContext=_canLogAdContext;
- (void)Register;
- (void)Reset;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 scene:(long long)arg3;
- (void)onSearchTopicTagClicked:(id)arg1 scene:(long long)arg2;
- (void)calADCellYVisible:(_Bool *)arg1 centerVisible:(_Bool *)arg2 bottomVisible:(_Bool *)arg3 forRowAtIndexPath:(id)arg4 inTableView:(id)arg5;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)reportAdExposureFromCachedBodyWrap;
- (void)tryReportAdCell:(id)arg1;
- (void)startAdOnTimelineReloaded;
- (void)startAdResumeAppear;
- (void)startAdDisappear;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

