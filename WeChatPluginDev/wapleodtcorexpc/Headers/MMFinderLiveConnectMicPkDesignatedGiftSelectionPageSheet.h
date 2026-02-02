//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMLoadingIndicatorView, NSArray, NSString, UILabel, UITableView;
@protocol MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate;

@interface MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheet
{
    id <MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSString *_micVirtualRoomId;
    unsigned long long _opponentScenario;
    MMLoadingIndicatorView *_loadingIndicatorView;
    UILabel *_emptyLabel;
    UITableView *_tableView;
    NSArray *_giftItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *giftItems; // @synthesize giftItems=_giftItems;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) unsigned long long opponentScenario; // @synthesize opponentScenario=_opponentScenario;
@property(retain, nonatomic) NSString *micVirtualRoomId; // @synthesize micVirtualRoomId=_micVirtualRoomId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initializeComponents;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 micVirtualRoomId:(id)arg2 opponentScenario:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

