//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSMutableArray, NSString;

@interface WCAccountGatewayAgreementsPageSheet
{
    CDUnknownBlockType _onGoNextBlock;
    MMUILabel *_headerLabel;
    NSMutableArray *_agreementCheckBoxes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *agreementCheckBoxes; // @synthesize agreementCheckBoxes=_agreementCheckBoxes;
@property(retain, nonatomic) MMUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(copy, nonatomic) CDUnknownBlockType onGoNextBlock; // @synthesize onGoNextBlock=_onGoNextBlock;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)configWithTitle:(id)arg1 agreements:(id)arg2 maxHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

