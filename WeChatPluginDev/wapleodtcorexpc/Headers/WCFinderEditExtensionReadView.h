//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMUILabel, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol WCFinderEditExtensionReadViewDataSource, WCFinderEditExtensionReadViewDelegate;

@interface WCFinderEditExtensionReadView
{
    long long _supportType;
    id <WCFinderEditExtensionReadViewDelegate> _m_delegate;
    id <WCFinderEditExtensionReadViewDataSource> _dataSource;
    UIView *_tipsView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIButton *_addButton;
    MMGrowTextView *_growTextView;
    NSString *_urlString;
    MMUILabel *_guidePasteBoardLabel;
    UIImageView *_triangleBView;
    UIView *_guidePasteBoardBGView;
    NSArray *_extensionLinkAllowedList;
    UIView *_textBackgroundView;
    NSString *_pasteBoardString;
    double _fKeyboardHeight;
    UILabel *_bottomWarningLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *bottomWarningLabel; // @synthesize bottomWarningLabel=_bottomWarningLabel;
@property(nonatomic) double fKeyboardHeight; // @synthesize fKeyboardHeight=_fKeyboardHeight;
@property(copy, nonatomic) NSString *pasteBoardString; // @synthesize pasteBoardString=_pasteBoardString;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) NSArray *extensionLinkAllowedList; // @synthesize extensionLinkAllowedList=_extensionLinkAllowedList;
@property(retain, nonatomic) UIView *guidePasteBoardBGView; // @synthesize guidePasteBoardBGView=_guidePasteBoardBGView;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) MMUILabel *guidePasteBoardLabel; // @synthesize guidePasteBoardLabel=_guidePasteBoardLabel;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <WCFinderEditExtensionReadViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderEditExtensionReadViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) long long supportType; // @synthesize supportType=_supportType;
- (void)keyboardWillShow:(double)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onAdd;
- (void)onClose;
- (void)setAddButtonEnable:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (void)tapForBecomeFirstResponder;
- (void)clickPasteBoardStringLabel;
- (void)removePasteBoardGuideBubble;
- (void)setUpPasteBoardGuideBubble;
- (id)getGrowTextPlaceHolder;
- (id)getTitleTips;
- (void)layoutComponents;
- (void)setUpBottomWarningView;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

