//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UITableView, UIView;
@protocol MMLiveSystemMentionsViewDelegate;

@interface MMLiveSystemMentionsView
{
    _Bool _isFolded;
    id <MMLiveSystemMentionsViewDelegate> _delegate;
    UIView *_mentionsTableViewContainer;
    UITableView *_mentionsTableView;
    MMUIButton *_arrowButton;
    double _maxHeight;
    NSMutableArray *_liveSystemMentions;
    struct CGPoint _locationPoint;
}

+ (double)singleSystemMentionHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *liveSystemMentions; // @synthesize liveSystemMentions=_liveSystemMentions;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) _Bool isFolded; // @synthesize isFolded=_isFolded;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) UITableView *mentionsTableView; // @synthesize mentionsTableView=_mentionsTableView;
@property(retain, nonatomic) UIView *mentionsTableViewContainer; // @synthesize mentionsTableViewContainer=_mentionsTableViewContainer;
@property(nonatomic) struct CGPoint locationPoint; // @synthesize locationPoint=_locationPoint;
@property(nonatomic) __weak id <MMLiveSystemMentionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLiveSystemMentionsCellCloseBtnClick:(id)arg1;
- (void)onLiveSystemMentionsCellClick:(id)arg1 mention:(id)arg2;
- (void)onClickArrowButton;
- (id)foldedIndexPaths;
- (id)curUsername;
- (double)contentMaxHeight;
- (_Bool)canBeFolded;
- (_Bool)cleanViewOnDataSourceEmpty;
- (void)updateOnDataSourceAndUIChanged;
- (void)setMentionsReadForIndex:(id)arg1;
- (void)setMentionReadAndDeleteCellForIndex:(id)arg1;
- (_Bool)jumpWithMention:(id)arg1;
- (void)updateShadowHidden;
- (void)fold;
- (void)expand;
- (void)addMaskLayerForTableContainer;
- (_Bool)tableViewHasMask;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)refreshUIOnDataReset;
- (void)setupUIWith:(double)arg1 maxHeight:(double)arg2;
- (void)updateDataOnFetchNewDone;
- (void)initData;
- (id)initWithMaxHeight:(double)arg1 width:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

