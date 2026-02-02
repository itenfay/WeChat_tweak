//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol OpenProfileLogicHelperDelegate;

@interface OpenProfileLogicHelper
{
    id <OpenProfileLogicHelperDelegate> _delegate;
    NSString *_ticket;
    int _source;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenProfileLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOpenProfileResponse:(id)arg1;
- (void)openProfile:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

