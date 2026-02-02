//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIProgressView;

@interface MMSMClearDataViewController
{
    int m_percent;
    UIProgressView *m_progressView;
}

- (void).cxx_destruct;
- (void)onClearUnnecessaryFilesFinished;
- (void)updateProgress:(unsigned int)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)onExitButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onClearButtonClicked:(id)arg1;
- (void)layoutViewsAfterClear;
- (void)layoutViewsForClearing;
- (void)layoutViewsBeforeClear;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

