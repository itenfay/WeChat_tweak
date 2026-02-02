//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;

@interface WCPasskeyDeletePageSheet
{
    CDUnknownBlockType _onGoDeleteBlock;
    MMUILabel *_headerLabel;
    MMUILabel *_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(copy, nonatomic) CDUnknownBlockType onGoDeleteBlock; // @synthesize onGoDeleteBlock=_onGoDeleteBlock;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)configWithTitle:(id)arg1 contentString:(id)arg2 maxHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

