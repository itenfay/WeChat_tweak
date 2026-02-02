//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPCSizeNotEnounghPageSheet
{
    CDUnknownBlockType _confirmCallBack;
    CDUnknownBlockType _cancelCallBack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelCallBack; // @synthesize cancelCallBack=_cancelCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)setupDetailViewWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

