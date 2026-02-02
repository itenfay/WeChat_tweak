//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, WCCommentListContentBackgroundView, WCMomentsPageContext, WCSNSMessage, WCUserComment;
@protocol WCCommentListContentViewDelegate;

@interface WCCommentListContentView : UIView
{
    id <WCCommentListContentViewDelegate> _delegate;
    WCSNSMessage *_message;
    WCMomentsPageContext *_pageContext;
    UIView *_rightestView;
    RichTextView *_contentTextView;
    WCUserComment *_comment;
    UIView *_emotionView;
    WCCommentListContentBackgroundView *_backgroundView;
}

+ (id)getDisplayContent:(id)arg1 dataItem:(id)arg2;
+ (id)getDisplayName:(id)arg1 dataItem:(id)arg2;
+ (unsigned long long)getDisplayContentParseType:(id)arg1 dataItem:(id)arg2;
+ (id)getAccessibilityStr:(id)arg1 dataItem:(id)arg2;
+ (_Bool)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
+ (double)getContentViewHeight:(id)arg1 dataItem:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentListContentBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) WCUserComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIView *rightestView; // @synthesize rightestView=_rightestView;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) WCSNSMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <WCCommentListContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onClickWCImage:(id)arg1;
- (void)onHeadAdSpecialClick:(id)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (_Bool)isAdvertiserComment:(id)arg1 dataItem:(id)arg2;
- (_Bool)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
- (id)finderLiveShareView:(id)arg1;
- (id)finderShareView:(id)arg1;
- (void)addEmotionView:(id)arg1;
- (id)getRightestView;
- (void)config:(id)arg1 dataItem:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

