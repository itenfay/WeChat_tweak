//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOrderCenterPivotViewController, NSArray, NSString, WCSearcher;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterLandingPageController
{
    id <MMOrderCenterReporter> _reporter;
    NSArray *_pivotTabControllers;
    WCSearcher *_searcher;
    MMOrderCenterPivotViewController *_pivotViewController;
    NSString *_filteringAppId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(retain, nonatomic) MMOrderCenterPivotViewController *pivotViewController; // @synthesize pivotViewController=_pivotViewController;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) NSArray *pivotTabControllers; // @synthesize pivotTabControllers=_pivotTabControllers;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFilteringAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

