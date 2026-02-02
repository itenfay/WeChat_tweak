//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface ilinkMultiTalkMsgViewController
{
    unsigned long long _roomID;
    MMTableView *_tableView;
    NSMutableArray *_members;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *members; // @synthesize members=_members;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long roomID; // @synthesize roomID=_roomID;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)layoutSubviews;
- (void)onBack;
- (void)configView;
- (void)viewDidLoad;
- (id)initWithMembers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

