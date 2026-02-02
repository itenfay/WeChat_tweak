//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderOriginalTypeItem, MMCommonActionSheetPicker, MMUIButton, NSArray, NSString, UIView;
@protocol WCFinderOriginalEduActionSheetDelegate;

@interface WCFinderOriginalEduActionSheet
{
    _Bool _agreementSelect;
    _Bool _isLoadingOriginal;
    _Bool _shouldShowInterests;
    _Bool _showRewardTips;
    int _commentScene;
    id <WCFinderOriginalEduActionSheetDelegate> _originalDelegate;
    NSString *_fromFeedId;
    unsigned long long _sourcePageType;
    NSArray *_originalItems;
    UIView *_tipsView;
    MMUIButton *_agreementCheckbox;
    MMUIButton *_acceptBtn;
    FinderOriginalTypeItem *_selectedOriginal;
    MMCommonActionSheetPicker *_startTimePicker;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool showRewardTips; // @synthesize showRewardTips=_showRewardTips;
@property(retain, nonatomic) MMCommonActionSheetPicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(retain, nonatomic) FinderOriginalTypeItem *selectedOriginal; // @synthesize selectedOriginal=_selectedOriginal;
@property(retain, nonatomic) MMUIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) _Bool shouldShowInterests; // @synthesize shouldShowInterests=_shouldShowInterests;
@property(nonatomic) _Bool isLoadingOriginal; // @synthesize isLoadingOriginal=_isLoadingOriginal;
@property(retain, nonatomic) NSArray *originalItems; // @synthesize originalItems=_originalItems;
@property(nonatomic) _Bool agreementSelect; // @synthesize agreementSelect=_agreementSelect;
@property(nonatomic) unsigned long long sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(copy, nonatomic) NSString *fromFeedId; // @synthesize fromFeedId=_fromFeedId;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderOriginalEduActionSheetDelegate> originalDelegate; // @synthesize originalDelegate=_originalDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onClickOriginTypeButton;
- (void)onClickAcceptBtn;
- (void)onCheckBoxClicked:(id)arg1;
- (void)updateAcceptBtnBkg;
- (void)bind25496ReportFromSetView:(id)arg1;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;
- (id)initWithShowRewardTips:(_Bool)arg1 delegate:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithShowRewardTips:(_Bool)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

