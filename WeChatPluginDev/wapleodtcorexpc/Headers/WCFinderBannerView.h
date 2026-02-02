//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView;
@protocol WCFinderBannerViewDelegate;

@interface WCFinderBannerView : UIView
{
    id <WCFinderBannerViewDelegate> _delegate;
    RichTextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTextColor:(id)arg1;
- (void)setTips:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

