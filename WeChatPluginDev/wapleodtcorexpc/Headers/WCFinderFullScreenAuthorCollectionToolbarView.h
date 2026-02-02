//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class InteractionLabel, MMUIButton, NSDictionary, NSString, UIButton, WCFinderFeedContentVM;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFullScreenAuthorCollectionToolbarView : UIView
{
    _Bool _allowCollect;
    _Bool _allowForward;
    _Bool _allowLike;
    _Bool _isCommentClose;
    _Bool _allowComment;
    _Bool _eyeShowEntrance;
    _Bool _hasShowAbnormal;
    _Bool _isPrivateState;
    _Bool _useEyeStyle;
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    NSString *_tid;
    MMUIButton *_collectionIconBtn;
    InteractionLabel *_collectionNumLabel;
    unsigned long long _collectionCount;
    MMUIButton *_viewIconBtn;
    UIButton *_viewNumView;
    unsigned long long _viewCount;
    MMUIButton *_forwardIconBtn;
    InteractionLabel *_forwardLabel;
    unsigned long long _forwardCount;
    MMUIButton *_likeIconBtn;
    InteractionLabel *_likeNumLabel;
    unsigned long long _likeCount;
    MMUIButton *_commentIconBtn;
    InteractionLabel *_commentNumLabel;
    unsigned long long _commentCount;
    unsigned long long _wxStatusRefCount;
    WCFinderFeedContentVM *_contentVM;
    NSDictionary *_eyeReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eyeReportInfo; // @synthesize eyeReportInfo=_eyeReportInfo;
@property(nonatomic) _Bool useEyeStyle; // @synthesize useEyeStyle=_useEyeStyle;
@property(nonatomic) _Bool isPrivateState; // @synthesize isPrivateState=_isPrivateState;
@property(nonatomic) _Bool hasShowAbnormal; // @synthesize hasShowAbnormal=_hasShowAbnormal;
@property(nonatomic) _Bool eyeShowEntrance; // @synthesize eyeShowEntrance=_eyeShowEntrance;
@property(nonatomic) __weak WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long wxStatusRefCount; // @synthesize wxStatusRefCount=_wxStatusRefCount;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) InteractionLabel *commentNumLabel; // @synthesize commentNumLabel=_commentNumLabel;
@property(retain, nonatomic) MMUIButton *commentIconBtn; // @synthesize commentIconBtn=_commentIconBtn;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool allowLike; // @synthesize allowLike=_allowLike;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) InteractionLabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) MMUIButton *likeIconBtn; // @synthesize likeIconBtn=_likeIconBtn;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(nonatomic) unsigned long long forwardCount; // @synthesize forwardCount=_forwardCount;
@property(retain, nonatomic) InteractionLabel *forwardLabel; // @synthesize forwardLabel=_forwardLabel;
@property(retain, nonatomic) MMUIButton *forwardIconBtn; // @synthesize forwardIconBtn=_forwardIconBtn;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) UIButton *viewNumView; // @synthesize viewNumView=_viewNumView;
@property(retain, nonatomic) MMUIButton *viewIconBtn; // @synthesize viewIconBtn=_viewIconBtn;
@property(nonatomic) _Bool allowCollect; // @synthesize allowCollect=_allowCollect;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) InteractionLabel *collectionNumLabel; // @synthesize collectionNumLabel=_collectionNumLabel;
@property(retain, nonatomic) MMUIButton *collectionIconBtn; // @synthesize collectionIconBtn=_collectionIconBtn;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)viewEyeView;
- (void)updatePrivateState:(_Bool)arg1 entranceStyle:(long long)arg2 commentScene:(int)arg3 feedId:(id)arg4;
- (void)cleanDataEntraceReportData;
- (void)bindWithTid:(id)arg1;
- (void)updateViewView:(_Bool)arg1;
- (void)updateCollectBtn:(_Bool)arg1;
- (void)updateCollectionView:(_Bool)arg1;
- (void)updateForwardBtn:(_Bool)arg1;
- (void)updateCommentBtn:(_Bool)arg1;
- (void)updateLikeBtn:(_Bool)arg1;
- (void)didClickShareBtn:(id)arg1;
- (void)updateForwardView:(_Bool)arg1;
- (void)updateCommentView:(_Bool)arg1;
- (void)updateLikeView:(_Bool)arg1;
- (void)updateUIWithContentVM:(id)arg1 commentClose:(_Bool)arg2 allowForward:(_Bool)arg3 allowFav:(_Bool)arg4 allowLike:(_Bool)arg5 allowComment:(_Bool)arg6;
- (void)didClickViewIconAction;
- (void)didClickCollectionAction;
- (void)didClickForwardAction;
- (void)didClickCommentAction;
- (void)didClickLikeAction;
- (void)updateEyeViewsPosition;
- (void)resetButtonEdgeInset:(id)arg1;
- (void)updateViewIconStyle:(_Bool)arg1 private:(_Bool)arg2 abnormal:(_Bool)arg3;
- (void)resetLabelFontSize:(double)arg1;
- (void)adjustUIMargin:(double)arg1;
- (void)adjustUICenterY;
- (void)adjustUIMarginFourth;
- (void)adjustUIMarginThird;
- (void)adjustUIMarginAgain;
- (void)adjustUIMargin;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

