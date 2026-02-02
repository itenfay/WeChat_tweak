//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderEventInfo, NSString;

@interface NewLifePostEventClickedHandler
{
    FinderEventInfo *_selectedEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderEventInfo *selectedEvent; // @synthesize selectedEvent=_selectedEvent;
- (void)eventPosterViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)eventPosterViewController:(id)arg1 didExitEvent:(id)arg2;
- (void)searchEventViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)createEventVC:(id)arg1 createEventSuccess:(id)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)endAction;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

