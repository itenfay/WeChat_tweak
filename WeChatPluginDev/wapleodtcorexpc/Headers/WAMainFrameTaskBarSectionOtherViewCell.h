//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMUIButton, MMWebImageView, MinimizeTaskData, NSMutableArray, NSString, UILabel, UIView;
@protocol WAMainFrameTaskBarSectionOtherViewCellDelegate;

@interface WAMainFrameTaskBarSectionOtherViewCell : UICollectionViewCell
{
    _Bool m_selected;
    UIView *_topMask;
    UIView *_bottomMask;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    MMUIButton *_closeButton;
    MinimizeTaskData *_taskData;
    id <WAMainFrameTaskBarSectionOtherViewCellDelegate> _delegate;
    UIView *_contentContainer;
    UIView *_coverArea;
    MMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
    NSMutableArray *_voiceOverElements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceOverElements; // @synthesize voiceOverElements=_voiceOverElements;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverArea; // @synthesize coverArea=_coverArea;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionOtherViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)updateAccessibilityFrame;
- (void)initVoiceOverElements;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (_Bool)shouldListenSnapshotUpdate;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithListInfo:(id)arg1;
- (id)defaultImage;
- (_Bool)supportAddToMinimize;
- (void)onCloseBtnClicked;
- (void)initView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

