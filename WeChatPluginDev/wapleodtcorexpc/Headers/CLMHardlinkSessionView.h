//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UINavigationController;

@interface CLMHardlinkSessionView
{
    MMTableView *_mainTableView;
    NSMutableArray *_chatLogInfoArray;
    UINavigationController *_navControl;
    NSString *_detailString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(retain, nonatomic) UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(retain, nonatomic) NSMutableArray *chatLogInfoArray; // @synthesize chatLogInfoArray=_chatLogInfoArray;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeTableView;
- (id)initWithMultiChatLogInfo:(id)arg1 fromNavControl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

