//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTagTextField, MMUIButton, NSString, UIColor, UIImageView, UIView;

@interface WCMusicSearchTextFieldController
{
    _Bool _showLeftBackButton;
    _Bool _showRightCancelButton;
    double _lazySearchTimeInterval;
    UIView *_contentView;
    double _customCancelButtonFontSize;
    long long _clearButtonMode;
    UIColor *_headerSearchTextFieldBgViewColor;
    double _searchTextFieldBgViewLayerCornerRadius;
    double _searchTextIconAndBgViewExpandMargin;
    double _searchTextFieldIconExpandMargin;
    double _textFieldFontSize;
    NSString *_textFieldPlaceholderStr;
    UIView *_emptyMaskView;
    MMTagTextField *_headerSearchTextField;
    UIView *_headerSearchTextFieldBgView;
    UIImageView *_headerSearchLeftIconView;
    UIView *_searchHeaderBgView;
    MMUIButton *_leftBackButton;
    MMUIButton *_cancelButton;
    struct CGSize _customHeaderSearchLeftIconViewSize;
    struct UIEdgeInsets _searchAreaContentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *leftBackButton; // @synthesize leftBackButton=_leftBackButton;
@property(retain, nonatomic) UIView *searchHeaderBgView; // @synthesize searchHeaderBgView=_searchHeaderBgView;
@property(retain, nonatomic) UIImageView *headerSearchLeftIconView; // @synthesize headerSearchLeftIconView=_headerSearchLeftIconView;
@property(retain, nonatomic) UIView *headerSearchTextFieldBgView; // @synthesize headerSearchTextFieldBgView=_headerSearchTextFieldBgView;
@property(retain, nonatomic) MMTagTextField *headerSearchTextField; // @synthesize headerSearchTextField=_headerSearchTextField;
@property(retain, nonatomic) UIView *emptyMaskView; // @synthesize emptyMaskView=_emptyMaskView;
@property(copy, nonatomic) NSString *textFieldPlaceholderStr; // @synthesize textFieldPlaceholderStr=_textFieldPlaceholderStr;
@property(nonatomic) double textFieldFontSize; // @synthesize textFieldFontSize=_textFieldFontSize;
@property(nonatomic) double searchTextFieldIconExpandMargin; // @synthesize searchTextFieldIconExpandMargin=_searchTextFieldIconExpandMargin;
@property(nonatomic) double searchTextIconAndBgViewExpandMargin; // @synthesize searchTextIconAndBgViewExpandMargin=_searchTextIconAndBgViewExpandMargin;
@property(nonatomic) double searchTextFieldBgViewLayerCornerRadius; // @synthesize searchTextFieldBgViewLayerCornerRadius=_searchTextFieldBgViewLayerCornerRadius;
@property(nonatomic) struct UIEdgeInsets searchAreaContentEdgeInsets; // @synthesize searchAreaContentEdgeInsets=_searchAreaContentEdgeInsets;
@property(retain, nonatomic) UIColor *headerSearchTextFieldBgViewColor; // @synthesize headerSearchTextFieldBgViewColor=_headerSearchTextFieldBgViewColor;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(nonatomic) struct CGSize customHeaderSearchLeftIconViewSize; // @synthesize customHeaderSearchLeftIconViewSize=_customHeaderSearchLeftIconViewSize;
@property(nonatomic) double customCancelButtonFontSize; // @synthesize customCancelButtonFontSize=_customCancelButtonFontSize;
@property(nonatomic) _Bool showRightCancelButton; // @synthesize showRightCancelButton=_showRightCancelButton;
@property(nonatomic) _Bool showLeftBackButton; // @synthesize showLeftBackButton=_showLeftBackButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double lazySearchTimeInterval; // @synthesize lazySearchTimeInterval=_lazySearchTimeInterval;
- (void)onBackButtonClicked;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onLeftBackButtonClicked;
- (void)onDoneButtonClicked;
- (void)onTextCleared;
- (void)onTextChanged:(id)arg1;
- (void)handleScrollViewWillBeginDragging:(id)arg1;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)onTextFieldChanged:(id)arg1;
- (void)updateText:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutSearchHeaderView;
- (void)initLeftBackButton;
- (void)initSearchHeaderBgView;
- (void)initSearchTextField;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

