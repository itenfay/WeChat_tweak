//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UITableView, UIView, WCDataItem;
@protocol WCAdvertiseActionFloatViewDelegate;

@interface WCAdvertiseActionFloatView
{
    WCDataItem *m_item;
    UIButton *m_unInterestBtn;
    UILabel *m_tipLabel;
    UIView *m_lineView;
    UITableView *m_dislikeTableView;
    struct CGPoint m_showPoint;
    UITableView *m_feedbackTableView;
    id <WCAdvertiseActionFloatViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdvertiseActionFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *m_unInterestBtn; // @synthesize m_unInterestBtn;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)spanReasonList;
- (void)hide;
- (void)showWithItemData:(id)arg1 tipPoint:(struct CGPoint)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

