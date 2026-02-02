//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCCoinFirstBuyCoinTipsViewDelegate;

@interface WCCoinFirstBuyCoinTipsView
{
    _Bool _alwaysDarkMode;
    id <WCCoinFirstBuyCoinTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinFirstBuyCoinTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysDarkMode; // @synthesize alwaysDarkMode=_alwaysDarkMode;
- (void)didClickDone;
- (void)pageSheetDidClose:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
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

