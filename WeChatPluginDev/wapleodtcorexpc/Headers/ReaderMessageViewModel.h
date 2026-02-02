//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSMutableArray, NSString, TingItem, UIImage;

@interface ReaderMessageViewModel
{
    struct CGSize m_titleViewSize;
    NSMutableArray *m_titleStyles;
    struct CGSize m_digestViewSize;
    NSMutableArray *m_digestStyles;
    NSArray *m_arrBtnList;
    double m_messageViewWidth;
    double m_digestViewMaxHeight;
    _Bool m_isPaySubcribeOpen;
    _Bool m_bIsPaid;
    NSString *m_pageIdentifier;
    _Bool _forceHideComplaintButton;
    _Bool _hasExposure;
    unsigned long long _viewScale;
}

+ (id)makeHighlightedLabel:(id)arg1 previewInfo:(id)arg2;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposure; // @synthesize hasExposure=_hasExposure;
@property(nonatomic) _Bool forceHideComplaintButton; // @synthesize forceHideComplaintButton=_forceHideComplaintButton;
@property(nonatomic) unsigned long long viewScale; // @synthesize viewScale=_viewScale;
@property(readonly, nonatomic) TingItem *tingItem;
- (id)rightCoverImageViewWithUrl:(id)arg1 size:(struct CGSize)arg2;
- (id)makeSearchPreview:(id)arg1;
@property(readonly, nonatomic) double collapsedAlpha;
@property(readonly, nonatomic) double collapsedScale;
- (void)updateTitle;
- (void)updatePayStatus:(_Bool)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
@property(readonly, nonatomic) UIImage *paySubcribeTagImage;
@property(readonly, nonatomic) struct CGSize payTagSize;
@property(readonly, nonatomic) _Bool isPaid;
@property(readonly, nonatomic) _Bool isPayContent;
@property(readonly, nonatomic) unsigned long long limitLineNumber;
@property(readonly, nonatomic) double limitTitleWidth;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (_Bool)shouldShowFooterView;
- (double)digestViewMaxHeight;
- (id)timeToStr:(id)arg1;
- (id)getTitleString:(id)arg1 bBig:(_Bool)arg2 bGray:(_Bool)arg3;
- (id)getBigVideoImage;
- (id)getSmallVideoImage;
@property(readonly, nonatomic) double coverImageHeight;
@property(readonly, nonatomic) NSString *coverImageURL;
- (struct CGSize)calculateDigestViewSize;
@property(readonly, nonatomic) NSMutableArray *digestStyles;
@property(readonly, nonatomic) struct CGSize digestViewSize;
- (struct CGSize)titleTagImageSize;
- (_Bool)hasTitleTag;
- (struct CGSize)calculateTitleViewSize;
@property(readonly, nonatomic) NSMutableArray *titleStyles;
@property(readonly, nonatomic) struct CGSize titleViewSize;
@property(readonly, nonatomic) NSString *titleText;
- (double)insideWidth;
@property(readonly, nonatomic) double messageNodeViewHeight;
- (void)resetTextSize;
@property(readonly, nonatomic) double messageNodeViewWidth;
@property(readonly, nonatomic) CContact *brandContact;
@property(readonly, nonatomic) _Bool isForbidForward;
@property(readonly, nonatomic) _Bool isShowHeadImageAndNickname;
@property(readonly, nonatomic) _Bool isShowReadAll;
@property(readonly, nonatomic) NSArray *nodeBtnList;
@property(readonly, nonatomic) NSArray *readerWraps;
- (void)initPaidStateIfNeed;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isDisableEditMode;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

