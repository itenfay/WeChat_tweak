//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ResourceDeleteHalfScreenView
{
    _Bool _checkDeleteAll;
    CDUnknownBlockType _confirmCallBack;
    CDUnknownBlockType _linkTapCallBack;
    unsigned long long _dataSize;
    unsigned long long _allDataSize;
    unsigned long long _filterType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkDeleteAll; // @synthesize checkDeleteAll=_checkDeleteAll;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) unsigned long long allDataSize; // @synthesize allDataSize=_allDataSize;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(copy, nonatomic) CDUnknownBlockType linkTapCallBack; // @synthesize linkTapCallBack=_linkTapCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (void)onClickPageSheetConfirmButton;
- (id)colorForPageSheetCancelButtonTitle;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onTapDeleteButton;
- (void)setupBottomSubview;
- (void)setupDetaiView;
- (id)initWithDataSize:(unsigned long long)arg1 allDataSize:(unsigned long long)arg2 filterType:(unsigned long long)arg3 checkDeleteAll:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

