//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UITableView, WCFinderCustomPanelSheet;

@interface WCFinderSelectPostIdentifierView : UIView
{
    _Bool _showOnlyOptionalUsernames;
    int _refreshPrepareState;
    WCFinderCustomPanelSheet *_sheet;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _cancelBlock;
    UITableView *_tableView;
    UIButton *_cancelButton;
    NSArray *_items;
    NSArray *_optionalUsernames;
    CDUnknownBlockType _updateFrameBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateFrameBlock; // @synthesize updateFrameBlock=_updateFrameBlock;
@property(nonatomic) _Bool showOnlyOptionalUsernames; // @synthesize showOnlyOptionalUsernames=_showOnlyOptionalUsernames;
@property(nonatomic) int refreshPrepareState; // @synthesize refreshPrepareState=_refreshPrepareState;
@property(copy, nonatomic) NSArray *optionalUsernames; // @synthesize optionalUsernames=_optionalUsernames;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) __weak WCFinderCustomPanelSheet *sheet; // @synthesize sheet=_sheet;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)createUserFailed;
- (void)cancelCreateUser;
- (void)createUserFinished:(id)arg1;
- (void)refetchUserPrepare;
- (void)didMoveToWindow;
- (void)closeSheet;
- (void)onClickCreateIdentify;
- (void)seletContatWithItem:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)onSelectedItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)itemHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canCreateFinderContact;
@property(retain, nonatomic) NSString *selectedUsername;
- (void)_loadAllSelfContact;
- (void)_loadOnlyOptionUserContacts;
- (void)loadItems;
- (id)createTableView;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 optionalUsernames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

