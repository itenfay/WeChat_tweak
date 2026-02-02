//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WXGMigrationAlertUpdateViewDelegate;

@interface WXGMigrationAlertUpdateView
{
    id <WXGMigrationAlertUpdateViewDelegate> _delegate;
    NSString *_tipString;
    NSString *_titleString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
@property(nonatomic) __weak id <WXGMigrationAlertUpdateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupDetailView;
- (id)initWithIsBackup:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

