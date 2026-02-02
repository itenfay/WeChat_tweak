//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UITableView;
@protocol WADropListViewDelegate;

@interface WADropListView : UIView
{
    UITableView *_tableView;
    NSMutableArray *_searchList;
    NSMutableArray *_dropList;
    id <WADropListViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WADropListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *dropList; // @synthesize dropList=_dropList;
- (long long)getCurrentItemCount;
- (void)filterUpdate:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onSelect:(id)arg1 value:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

