//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveIconButton, NSString, UIImageView, UILabel, WCFinderFeedContentVM;
@protocol WCFinderPanelRingtoneBubbleViewDelegate;

@interface WCFinderPanelRingtoneBubbleView : UIView
{
    id <WCFinderPanelRingtoneBubbleViewDelegate> _delegate;
    double _textAreaMaxWidth;
    double _maxWidth;
    UIView *_containerView;
    UIImageView *_musicImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMLiveIconButton *_actionButton;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double textAreaMaxWidth; // @synthesize textAreaMaxWidth=_textAreaMaxWidth;
@property(nonatomic) __weak id <WCFinderPanelRingtoneBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedOriginalSoundInfoChanged:(id)arg1;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onClickActionButton;
- (void)updateWithContentVM:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

