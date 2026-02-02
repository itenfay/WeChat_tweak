//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMicInfo_Wording, MMTableView, NSString;

@interface MMFinderLiveConnectMicPkSelectSheetView
{
    CDUnknownBlockType _selectAction;
    MMTableView *_tableView;
    FinderLiveMicInfo_Wording *_micInfoWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveMicInfo_Wording *micInfoWording; // @synthesize micInfoWording=_micInfoWording;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)subTitle:(unsigned long long)arg1;
- (void)initViews;
- (void)initiateSelection;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

