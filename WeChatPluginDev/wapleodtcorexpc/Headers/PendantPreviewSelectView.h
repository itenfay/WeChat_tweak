//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UITableView;
@protocol PendantPreviewSelectViewDelegate;

@interface PendantPreviewSelectView : UIView
{
    long long _selectedIndex;
    id <PendantPreviewSelectViewDelegate> _delegate;
    NSString *_title;
    NSArray *_buttonTitles;
    UITableView *_tableView;
    UIView *_bgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <PendantPreviewSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)showInViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 selected:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

