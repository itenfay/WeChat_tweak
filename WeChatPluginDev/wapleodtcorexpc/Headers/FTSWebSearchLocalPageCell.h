//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, SugResult, UITableView;
@protocol WebSearchLocalPageCellDelegate;

@interface FTSWebSearchLocalPageCell
{
    SugResult *_resultWrap;
    UITableView *_resultTableView;
    NSMutableSet *_exposeSet;
    _Bool _enableCardStyle;
    id <WebSearchLocalPageCellDelegate> _delegate;
    unsigned long long _localSearchId;
}

+ (double)heightForData:(id)arg1 width:(double)arg2;
+ (id)GenHStackWith:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableCardStyle; // @synthesize enableCardStyle=_enableCardStyle;
@property(nonatomic) unsigned long long localSearchId; // @synthesize localSearchId=_localSearchId;
@property(nonatomic) __weak id <WebSearchLocalPageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (void)resetExposeSet;
- (void)updateVisibleYInSelfCoordinate:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)rowCount;
- (long long)historyCount;
- (double)horizonalMargin;
- (_Bool)useCardStyle;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

