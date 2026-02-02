//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol WCCoinConsumeTipsViewDelegate;

@interface WCCoinConsumeTipsView
{
    NSArray *_wording;
    id <WCCoinConsumeTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinConsumeTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *wording; // @synthesize wording=_wording;
- (void)pageSheetDidClose:(_Bool)arg1;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

