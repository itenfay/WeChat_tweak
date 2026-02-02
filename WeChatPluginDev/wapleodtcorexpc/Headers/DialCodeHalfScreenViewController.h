//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCommonPickerView, MMUILabel, NSArray, NSString, WCRedesignButtonItem, WCSheetView;
@protocol DialCodeHalfScreenViewControllerDelegate;

@interface DialCodeHalfScreenViewController
{
    _Bool _isPickingLanguage;
    id <DialCodeHalfScreenViewControllerDelegate> _delegate;
    NSString *_languageCode;
    NSString *_languageName;
    WCSheetView *_sheetView;
    MMUILabel *_contentLabel;
    WCRedesignButtonItem *_changeLanguageButtonItem;
    NSString *_pickLanguageCode;
    NSString *_pickLanguageName;
    NSArray *_arrLanguageCodes;
    NSArray *_arrLanguageNames;
    MMCommonPickerView *_pickerview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCommonPickerView *pickerview; // @synthesize pickerview=_pickerview;
@property(retain, nonatomic) NSArray *arrLanguageNames; // @synthesize arrLanguageNames=_arrLanguageNames;
@property(retain, nonatomic) NSArray *arrLanguageCodes; // @synthesize arrLanguageCodes=_arrLanguageCodes;
@property(retain, nonatomic) NSString *pickLanguageName; // @synthesize pickLanguageName=_pickLanguageName;
@property(retain, nonatomic) NSString *pickLanguageCode; // @synthesize pickLanguageCode=_pickLanguageCode;
@property(nonatomic) _Bool isPickingLanguage; // @synthesize isPickingLanguage=_isPickingLanguage;
@property(retain, nonatomic) WCRedesignButtonItem *changeLanguageButtonItem; // @synthesize changeLanguageButtonItem=_changeLanguageButtonItem;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) __weak id <DialCodeHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onTapChangeLanguageButton;
- (void)viewDidLoad;
- (id)initWithLanguageCode:(id)arg1 languageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

