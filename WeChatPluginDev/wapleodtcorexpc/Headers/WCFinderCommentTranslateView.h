//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel, WCFinderAnimationLoadingView, WCFinderFeedContentTextView;

@interface WCFinderCommentTranslateView : UIView
{
    UILabel *_tipsLabel;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderFeedContentTextView *_translateView;
    unsigned long long _translateType;
}

+ (double)translateViewHeightWithComment:(id)arg1 maxWidth:(double)arg2;
+ (double)translateViewHeightWithContent:(id)arg1 type:(unsigned long long)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long translateType; // @synthesize translateType=_translateType;
@property(nonatomic) __weak WCFinderFeedContentTextView *translateView; // @synthesize translateView=_translateView;
@property(nonatomic) __weak WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutUI;
- (void)updateTranslateStyle:(unsigned long long)arg1 content:(id)arg2 source:(id)arg3;
- (void)updateTranslateComment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

