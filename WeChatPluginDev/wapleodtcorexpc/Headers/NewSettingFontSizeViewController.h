//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMStepSlider, NSArray, NSString, UITableView, UIView;

@interface NewSettingFontSizeViewController
{
    unsigned int m_curLevel;
    double m_uiCurSize;
    NSArray *m_allLevel;
    UITableView *_tableView1;
    MMStepSlider *_sliderView;
    UIView *_bottomView;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)genMsgLabel:(id)arg1 isSender:(_Bool)arg2;
- (void)makeCell:(id)arg1 isSender:(_Bool)arg2 andText:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mmSliderViewChange:(unsigned int)arg1;
- (void)viewDidLayoutSubviews;
- (void)configBottomView;
- (float)calculateSlidingWidth;
- (void)viewWillLayoutSubviews;
- (void)configTableView1;
- (void)configData;
- (void)saveFontChange;
- (void)OnSave;
- (void)OnCancel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

