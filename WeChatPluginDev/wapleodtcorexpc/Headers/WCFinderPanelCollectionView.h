//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WCFinderJumpInfo;
@protocol WCFinderPanelCollectionViewDelegate;

@interface WCFinderPanelCollectionView : UIView
{
    int _showPosition;
    WCFinderJumpInfo *_jumpInfo;
    id <WCFinderPanelCollectionViewDelegate> _delegate;
    double _textAreaMaxWidth;
    double _maxWidth;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_episodeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double textAreaMaxWidth; // @synthesize textAreaMaxWidth=_textAreaMaxWidth;
@property(nonatomic) __weak id <WCFinderPanelCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)onClickBubble;
- (id)episodeLabelTextFor:(id)arg1;
- (id)titleLabelTextFor:(id)arg1;
- (id)bubbleTextFor:(id)arg1;
- (void)setupReportWith:(id)arg1;
- (void)updateLayout;
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

