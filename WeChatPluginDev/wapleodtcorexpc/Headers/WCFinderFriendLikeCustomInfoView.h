//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, WCFinderDynamicRichTextView;

@interface WCFinderFriendLikeCustomInfoView : UIView
{
    UIFont *_tipsFont;
    UIColor *_tipsColor;
    NSMutableArray *_roundHeaderViews;
    WCFinderDynamicRichTextView *_likeInfoTextView;
    WCFinderDynamicRichTextView *_appendTisTextView;
    UIView *_avatorContainerView;
    struct CGSize _headImageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *avatorContainerView; // @synthesize avatorContainerView=_avatorContainerView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *appendTisTextView; // @synthesize appendTisTextView=_appendTisTextView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *likeInfoTextView; // @synthesize likeInfoTextView=_likeInfoTextView;
@property(retain, nonatomic) NSMutableArray *roundHeaderViews; // @synthesize roundHeaderViews=_roundHeaderViews;
@property(retain, nonatomic) UIColor *tipsColor; // @synthesize tipsColor=_tipsColor;
@property(retain, nonatomic) UIFont *tipsFont; // @synthesize tipsFont=_tipsFont;
@property(nonatomic) struct CGSize headImageSize; // @synthesize headImageSize=_headImageSize;
- (id)accessibilityLabel;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(struct CGSize)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)getDisplayCommentInfo:(id)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)setUpUI;
- (double)infoViewHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

