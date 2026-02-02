//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCTimeLineContactSelectViewControllerDelegate;

@interface WCTimeLineContactSelectViewController
{
    id <WCTimeLineContactSelectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)getSafeSearchViewController;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onCancelBack:(id)arg1;
- (void)initTitleArea;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

