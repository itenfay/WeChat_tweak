//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor;
@protocol WCFinderFeedNotRealNameToolbarViewDelegate;

@interface WCFinderFeedNotRealNameToolbarView : UIView
{
    id <WCFinderFeedNotRealNameToolbarViewDelegate> _delegate;
    UIColor *_tipsLabelColor;
    UIColor *_retryColor;
}

+ (double)toolbarHeightWith:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *retryColor; // @synthesize retryColor=_retryColor;
@property(retain, nonatomic) UIColor *tipsLabelColor; // @synthesize tipsLabelColor=_tipsLabelColor;
@property(nonatomic) __weak id <WCFinderFeedNotRealNameToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickRetryAction;
- (void)clickCancelAction;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1 tipsLabelColor:(id)arg2 retryColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

