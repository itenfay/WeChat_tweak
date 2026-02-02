//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAMainListStarLogic;

@interface WAMyStarListViewModel
{
    NSString *m_showSessionId;
    WAMainListStarLogic *_starLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
- (void)starDataDidUpdated;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)reportStarListViewShowAction;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportOnViewDidAppear;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (_Bool)deleteItem:(long long)arg1;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMove;
- (void)refreshData;
- (id)dataForIndex:(long long)arg1;
- (long long)getStarNumberLimitation;
- (_Bool)isReachLimit;
- (_Bool)hasData;
- (long long)count;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

