//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, WeNoteDataController;
@protocol WNSearchLogicDelegate;

@interface WNSearchLogic : NSObject
{
    NSArray *m_searchResultInfos;
    NSMutableArray *m_untreatedResultInfos;
    NSString *m_query;
    NSMutableDictionary *m_indexToCoverViews;
    unsigned long long m_curFocusIndex;
    _Bool m_needReFocusCurIndex;
    MMTableView *_tableView;
    WeNoteDataController *_dataController;
    id <WNSearchLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WNSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WeNoteDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)onChangeFocusIndex:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)tryToShowCoverViewOn:(id)arg1;
- (unsigned long long)getPreTotalCountWith:(unsigned long long)arg1;
- (unsigned long long)getArrIndexWith:(unsigned long long)arg1;
- (void)scrollFocusLocationVisible:(unsigned long long)arg1;
- (void)scrollCurFocusIndexVisible;
- (void)setCoverInfo:(id)arg1 enableFocus:(_Bool)arg2 withRealIndex:(unsigned long long)arg3 arrIndex:(unsigned long long)arg4;
- (void)changeFocusWithCurFocusIndex:(unsigned long long)arg1 nextFocusIndex:(unsigned long long)arg2;
- (void)tryToshowCoverViewAt:(id)arg1;
- (id)getSearchCoverViewWith:(id)arg1;
- (id)getCoverInfoWith:(id)arg1 coverView:(id)arg2 location:(unsigned long long)arg3;
- (void)tryToReFocusCurIndex;
- (void)handleMatchLocationsWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (void)setMatchLocationArr:(id)arg1 query:(id)arg2;
- (void)reloadSearchCoverView;
- (void)clearSearchStatus;
- (void)cancelSearch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

