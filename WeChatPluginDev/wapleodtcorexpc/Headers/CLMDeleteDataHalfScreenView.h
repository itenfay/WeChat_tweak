//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CLMDeleteDataHalfScreenView
{
    CDUnknownBlockType _confirmCallBack;
    unsigned long long _dataSize;
    NSString *_titleString;
    NSString *_tipString;
    NSString *_confirmString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *confirmString; // @synthesize confirmString=_confirmString;
@property(copy, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupDetailView;
- (id)initWithDataSize:(unsigned long long)arg1 title:(id)arg2 tip:(id)arg3 confirmTip:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

