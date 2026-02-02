//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetAdapter, NSString;

@interface WCAdHalfScreenContainerLiteAppView
{
    MMPageSheetAdapter *_sheetAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *sheetAdapter; // @synthesize sheetAdapter=_sheetAdapter;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (double)calcContentHeight;
- (id)getHalfScreenLiteAppViewController;
- (void)initView;
- (id)initWithContainerInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

