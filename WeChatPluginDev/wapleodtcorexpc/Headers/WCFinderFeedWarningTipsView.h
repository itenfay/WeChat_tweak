//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderFeedContentTextView, WCFinderFeedContentVM;

@interface WCFinderFeedWarningTipsView : UIView
{
    UIImageView *_warningImageView;
    UILabel *_warningLabel;
    WCFinderFeedContentTextView *_warningTextView;
    UIImageView *_arrowImageView;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderFeedContentTextView *warningTextView; // @synthesize warningTextView=_warningTextView;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
- (void)clickAction;
- (_Bool)checkShowWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (void)updateStyle:(unsigned long long)arg1;
- (void)setUpUI;
- (id)init;

@end

