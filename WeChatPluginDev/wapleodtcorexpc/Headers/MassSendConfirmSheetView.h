//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSString, UIImageView, UIView;

@interface MassSendConfirmSheetView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    MMUILabel *_titleLabel;
    UIView *_topSeperatorLineView;
    MMUILabel *_contactDescLabel;
    UIImageView *_arrowImageView;
    UIView *_bottomSperatorLineView;
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) UIView *bottomSperatorLineView; // @synthesize bottomSperatorLineView=_bottomSperatorLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *contactDescLabel; // @synthesize contactDescLabel=_contactDescLabel;
@property(retain, nonatomic) UIView *topSeperatorLineView; // @synthesize topSeperatorLineView=_topSeperatorLineView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)initView;
- (void)initConfigs;
- (id)initWithContacts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

