//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIView, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderGroupMemberCreateMasterSheet
{
    NSString *_titleDesc;
    CDUnknownBlockType _complectionBlock;
    UIView *_contentContainerView;
    WCFinderHeadImageView *_headImageView;
    MMUIButton *_aggreCheckBox;
    RichTextView *_aggrementView;
    RichTextView *_nickNameLabel;
    WCFinderContact *_createContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *createContact; // @synthesize createContact=_createContact;
@property(retain, nonatomic) RichTextView *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) RichTextView *aggrementView; // @synthesize aggrementView=_aggrementView;
@property(retain, nonatomic) MMUIButton *aggreCheckBox; // @synthesize aggreCheckBox=_aggreCheckBox;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(copy, nonatomic) CDUnknownBlockType complectionBlock; // @synthesize complectionBlock=_complectionBlock;
@property(copy, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
- (void)createUserFinished:(id)arg1;
- (void)shakeAggreetView;
- (struct UIEdgeInsets)contentInset;
- (long long)closeButtonStyle;
- (void)clickEditAction;
- (void)createGroupContact;
- (void)onAgreementCheckBoxClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (double)maxHeight;
- (id)loadContentView;
- (id)createAgrementView;
- (void)dismiss;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

