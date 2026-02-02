//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMCPLabel, MMHeadImageView, MMPageSheetAdapter, MMUIButton, MMUILabel, NSString, UIButton;

@interface WWKFAddContactViewController
{
    _Bool _bHalfScreen;
    MMPageSheetAdapter *_adapter;
    CContact *_contact;
    CDUnknownBlockType _comfirmBlock;
    NSString *_antispamText;
    MMHeadImageView *_headView;
    MMUILabel *_nickNameLabel;
    MMCPLabel *_descLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUILabel *_antispamLabel;
    UIButton *_confirmButton;
    MMUIButton *_cancelButton;
}

+ (double)halfScreenHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *antispamLabel; // @synthesize antispamLabel=_antispamLabel;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMCPLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(copy, nonatomic) NSString *antispamText; // @synthesize antispamText=_antispamText;
@property(nonatomic) _Bool bHalfScreen; // @synthesize bHalfScreen=_bHalfScreen;
@property(copy, nonatomic) CDUnknownBlockType comfirmBlock; // @synthesize comfirmBlock=_comfirmBlock;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
- (void)onConfirm;
- (void)onCancel;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)viewDidLoad;
- (void)updateUILayoutInFullScreenState;
- (void)updateUILayoutInHalfScreenState;
- (void)viewDidLayoutSubviews;
- (void)updateUIComptsInFullScreenState;
- (void)updateUIComptsInHalfScreenState;
- (void)updateUICompts;
- (void)initMainUI;
- (id)initWithContact:(id)arg1 inHalfScreen:(_Bool)arg2 antispamText:(id)arg3 comfirmBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

