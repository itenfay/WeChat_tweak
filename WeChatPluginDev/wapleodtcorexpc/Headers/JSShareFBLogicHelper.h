//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ShareConfirmView;
@protocol JSShareFBLogicHelperDelegate;

@interface JSShareFBLogicHelper
{
    ShareConfirmView *_confirmView;
    unsigned int fbEventID;
    id <JSShareFBLogicHelperDelegate> _delegate;
    NSString *_link;
    NSString *_thumbImageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) __weak id <JSShareFBLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rotateToOrientaion:(long long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnError:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)showConfirmView;
- (void)initConfirmViewWithTitle:(id)arg1 description:(id)arg2 thumbURL:(id)arg3;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 link:(id)arg2 description:(id)arg3 thumbURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

