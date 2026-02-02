//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColikeAppInfo, MMGrowTextView, MMUIButton, MMUILabel, NSString, UIScrollView, WSWowShareReceiverVideoContentView;

@interface WSWowShareGlobalReceiverViewController
{
    _Bool _disappearIsFromSubmit;
    UIScrollView *_contentView;
    WSWowShareReceiverVideoContentView *_videoContentView;
    MMGrowTextView *_imputField;
    MMUILabel *_textNumView;
    MMUILabel *_textLimitView;
    MMUIButton *_wowEduButton;
    NSString *_paramString;
    ColikeAppInfo *_appInfo;
    long long _type;
    NSString *_docId;
    CDUnknownBlockType _resultBlock;
}

+ (_Bool)canPresentWowGloabalReceiverPage:(id)arg1 appId:(id)arg2 appName:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool disappearIsFromSubmit; // @synthesize disappearIsFromSubmit=_disappearIsFromSubmit;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) ColikeAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *paramString; // @synthesize paramString=_paramString;
@property(retain, nonatomic) MMUIButton *wowEduButton; // @synthesize wowEduButton=_wowEduButton;
@property(retain, nonatomic) MMUILabel *textLimitView; // @synthesize textLimitView=_textLimitView;
@property(retain, nonatomic) MMUILabel *textNumView; // @synthesize textNumView=_textNumView;
@property(retain, nonatomic) MMGrowTextView *imputField; // @synthesize imputField=_imputField;
@property(retain, nonatomic) WSWowShareReceiverVideoContentView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)onRequestColikePostEnd:(_Bool)arg1 errorMsg:(id)arg2;
- (void)openWowEducatePage;
- (void)enterCommentDone:(id)arg1;
- (void)onDone;
- (void)onCancel;
- (void)foldSelf;
- (void)updateTextNoteViews;
- (void)initView;
- (void)initNavBar;
- (void)analyseData;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenParamString:(id)arg1 appId:(id)arg2 appName:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

