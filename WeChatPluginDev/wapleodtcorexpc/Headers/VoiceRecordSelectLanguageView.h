//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol VoiceRecordSelectLanguageViewDelegate;

@interface VoiceRecordSelectLanguageView
{
    unsigned int _selectedLanguageType;
    id <VoiceRecordSelectLanguageViewDelegate> _delegate;
    UIView *_selectedPanelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedPanelView; // @synthesize selectedPanelView=_selectedPanelView;
@property(nonatomic) unsigned int selectedLanguageType; // @synthesize selectedLanguageType=_selectedLanguageType;
@property(nonatomic) __weak id <VoiceRecordSelectLanguageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onTapSelectLanguageButton:(id)arg1;
- (void)configSelectedPanelView;
- (void)configPageSheet;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

