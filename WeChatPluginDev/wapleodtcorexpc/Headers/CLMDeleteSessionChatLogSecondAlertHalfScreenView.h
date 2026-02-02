//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CLMDeleteSessionChatLogSecondAlertHalfScreenView
{
    CDUnknownBlockType _confirmCallBack;
    unsigned long long _allDataSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long allDataSize; // @synthesize allDataSize=_allDataSize;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (void)onClickPageSheetConfirmButton;
- (id)colorForPageSheetCancelButtonTitle;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupDetaiView;
- (id)initWithDataSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

