//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnniversaryDecorationViewModel, NSString, PAGView;

@interface MMFinderLiveAnniversaryDecorationView
{
    unsigned long long _status;
    PAGView *_decorationView;
    MMFinderLiveAnniversaryDecorationViewModel *_viewModel;
    NSString *_currentUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) MMFinderLiveAnniversaryDecorationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) PAGView *decorationView; // @synthesize decorationView=_decorationView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)playEnd;
- (void)decorationViewPlay;
- (void)setupDecorationView;
- (void)stopAnimation;
- (void)layoutUI;
- (void)updateViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

