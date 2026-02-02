//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WCFinderFeedImageCDNView;
@protocol WCFinderTimelineJumpViewDelegate;

@interface WCFinderTimelineJumpView : UIView
{
    id <WCFinderTimelineJumpViewDelegate> _delegate;
    UIImageView *_arrowImageView;
    UILabel *_tipsLabel;
    WCFinderFeedImageCDNView *_thumbImageView;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak id <WCFinderTimelineJumpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickAction;
- (void)updateWithDataItem:(id)arg1 tips:(id)arg2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

