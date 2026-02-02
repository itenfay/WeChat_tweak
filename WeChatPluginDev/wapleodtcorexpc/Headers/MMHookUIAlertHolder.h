//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface MMHookUIAlertHolder
{
    NSMutableSet *_alertViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *alertViews; // @synthesize alertViews=_alertViews;
- (void)removeAlertView:(id)arg1;
- (void)addAlertView:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

