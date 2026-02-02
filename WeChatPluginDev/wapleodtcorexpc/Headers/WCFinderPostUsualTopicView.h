//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UITableView;
@protocol WCFinderPostUsualTopicViewDelegate;

@interface WCFinderPostUsualTopicView
{
    id <WCFinderPostUsualTopicViewDelegate> _delegate;
    NSArray *_usualTopicsArray;
    UITableView *_topicsTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *topicsTableView; // @synthesize topicsTableView=_topicsTableView;
@property(retain, nonatomic) NSArray *usualTopicsArray; // @synthesize usualTopicsArray=_usualTopicsArray;
@property(nonatomic) __weak id <WCFinderPostUsualTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTopicWidth:(double)arg1 bottom:(double)arg2 usualTopicsArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

