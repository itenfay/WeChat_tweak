//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveTagInfo, MMTableView, NSArray, NSString;
@protocol MMFinderLiveSelectTagViewControllerDelegate;

@interface MMFinderLiveSelectTagViewController
{
    _Bool _postAfterSelect;
    id <MMFinderLiveSelectTagViewControllerDelegate> _actionDelegate;
    NSArray *_tagInfos;
    FinderLiveTagInfo *_lastSelectedTagInfo;
    FinderLiveTagInfo *_selectedTagInfo;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool postAfterSelect; // @synthesize postAfterSelect=_postAfterSelect;
@property(retain, nonatomic) FinderLiveTagInfo *selectedTagInfo; // @synthesize selectedTagInfo=_selectedTagInfo;
@property(retain, nonatomic) FinderLiveTagInfo *lastSelectedTagInfo; // @synthesize lastSelectedTagInfo=_lastSelectedTagInfo;
@property(retain, nonatomic) NSArray *tagInfos; // @synthesize tagInfos=_tagInfos;
@property(nonatomic) __weak id <MMFinderLiveSelectTagViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getSeparatorView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onFinderLiveSelectSubTagViewControllerTapDone;
- (void)onFinderLiveSelectSubTagViewControllerSelectTagInfo:(id)arg1;
- (void)onTapDone;
- (void)onTapCancel;
- (id)cellIdentifier;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTagInfos:(id)arg1 selectedTag:(id)arg2 postAfterSelect:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

