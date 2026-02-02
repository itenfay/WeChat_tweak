//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RadarSearchView;

@interface RadarSearchViewController
{
    RadarSearchView *m_radarView;
}

- (void).cxx_destruct;
- (id)getCurViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initForRadarSearch;
- (void)initRadarSearchView;
- (void)onRadarSearchViewClose:(_Bool)arg1;
- (void)dealloc;
- (_Bool)useBlackStatusbar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

