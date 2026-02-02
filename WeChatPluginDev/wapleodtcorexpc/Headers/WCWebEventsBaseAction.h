//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCWebEventsBaseAction
{
    _Bool _bPerformed;
}

@property(nonatomic) _Bool bPerformed; // @synthesize bPerformed=_bPerformed;
- (id)actionDescription;
- (void)performEventAction;
- (_Bool)canPerformEventAction;
- (id)targetEventSets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

