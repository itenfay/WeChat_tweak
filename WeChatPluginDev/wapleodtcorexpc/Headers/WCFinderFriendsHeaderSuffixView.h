//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, WCFinderDynamicRichTextView;

@interface WCFinderFriendsHeaderSuffixView : UIView
{
    UIColor *_titleColor;
    UIView *_headerContainerView;
    WCFinderDynamicRichTextView *_likeInfoTextView;
    WCFinderDynamicRichTextView *_appendTisTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDynamicRichTextView *appendTisTextView; // @synthesize appendTisTextView=_appendTisTextView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *likeInfoTextView; // @synthesize likeInfoTextView=_likeInfoTextView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (id)getHeadImageViewWithContact:(id)arg1 size:(struct CGSize)arg2;
- (void)updateCommentRecommendFriendList:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

