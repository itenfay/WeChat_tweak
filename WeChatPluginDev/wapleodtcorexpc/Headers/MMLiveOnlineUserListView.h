//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTableView, NSArray, NSString;
@protocol MMLiveContactTableViewCellDelegate;

@interface MMLiveOnlineUserListView : UIView
{
    MMTableView *_contactTableView;
    id <MMLiveContactTableViewCellDelegate> _cellDelegate;
    NSArray *_userList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(nonatomic) __weak id <MMLiveContactTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) MMTableView *contactTableView; // @synthesize contactTableView=_contactTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateWithUserList:(id)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

