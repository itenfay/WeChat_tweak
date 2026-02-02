//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveFeedStreamCommentContentView, NSString;

@interface MMFinderLiveFeedStreamCommentView
{
    _Bool _isCloseComment;
    _Bool _hasAppendComment;
    _Bool _isLayoutStandardChanged;
    _Bool _isLayoutFontScaleChanged;
    unsigned long long _style;
    unsigned long long _limitedDisplayCommentCount;
    CDUnknownBlockType _actionBlock;
    MMLiveFeedStreamCommentContentView *_commentContentView;
    double _currentLayoutStandardWidth;
    double _currentLayoutStandardLeft;
    double _currentLayoutFontScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLayoutFontScaleChanged; // @synthesize isLayoutFontScaleChanged=_isLayoutFontScaleChanged;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(nonatomic) _Bool isLayoutStandardChanged; // @synthesize isLayoutStandardChanged=_isLayoutStandardChanged;
@property(nonatomic) double currentLayoutStandardLeft; // @synthesize currentLayoutStandardLeft=_currentLayoutStandardLeft;
@property(nonatomic) double currentLayoutStandardWidth; // @synthesize currentLayoutStandardWidth=_currentLayoutStandardWidth;
@property(nonatomic) _Bool hasAppendComment; // @synthesize hasAppendComment=_hasAppendComment;
@property(nonatomic) _Bool isCloseComment; // @synthesize isCloseComment=_isCloseComment;
@property(retain, nonatomic) MMLiveFeedStreamCommentContentView *commentContentView; // @synthesize commentContentView=_commentContentView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) unsigned long long limitedDisplayCommentCount; // @synthesize limitedDisplayCommentCount=_limitedDisplayCommentCount;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)onFontSizeChange;
- (id)commentTableViewModel;
- (id)createCommentContentView;
- (id)createCommentTableViewModelForCommentContentView:(id)arg1 boxId:(id)arg2;
- (void)appendCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 preAppend:(_Bool)arg4;
- (void)appendScrollToBottom:(_Bool)arg1;
- (void)preAppendComments:(id)arg1;
- (void)updateLayoutFontScale;
- (double)commentTableContentWidth:(id)arg1;
- (void)updateLayoutStandardWidth;
- (void)initDefaultLayoutFontScale;
- (void)initDefaultLayoutStandard;
- (void)judgeLayoutFontScaleChanged;
- (void)judgeLayoutStandardWidthChanged;
- (void)handleLayoutOrientationChangedAfterLayout;
- (void)handleLayoutOrientationChangedBeforeLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

