//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveTagInfo, MMTableView, NSArray, NSString;
@protocol MMFinderLiveSelectSubTagViewControllerDelegate;

@interface MMFinderLiveSelectSubTagViewController
{
    _Bool _postAfterSelect;
    id <MMFinderLiveSelectSubTagViewControllerDelegate> _actionDelegate;
    FinderLiveTagInfo *_selectedTagInfo;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool postAfterSelect; // @synthesize postAfterSelect=_postAfterSelect;
@property(retain, nonatomic) FinderLiveTagInfo *selectedTagInfo; // @synthesize selectedTagInfo=_selectedTagInfo;
@property(nonatomic) __weak id <MMFinderLiveSelectSubTagViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTapDone;
@property(readonly, nonatomic) NSArray *subTagInfos;
- (id)cellIdentifier;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithSelectedTagInfo:(id)arg1 postAfterSelect:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

