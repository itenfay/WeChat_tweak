//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGView, UILabel, WCAdInteractionLabelInfo, WCAdInteractionLabelLogic, WCAdInteractionRollingLabelView, WCDataItem;

@interface WCAdInteractionLabelView : UIView
{
    WCAdInteractionLabelInfo *_labelInfo;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    WCAdInteractionLabelLogic *_labelLogic;
    PAGView *_iconView;
    UILabel *_titleLabel;
    WCAdInteractionRollingLabelView *_rollingLabelView;
}

+ (struct CGSize)calcViewSizeForLabelInfo:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdInteractionRollingLabelView *rollingLabelView; // @synthesize rollingLabelView=_rollingLabelView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PAGView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCAdInteractionLabelLogic *labelLogic; // @synthesize labelLogic=_labelLogic;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdInteractionLabelInfo *labelInfo; // @synthesize labelInfo=_labelInfo;
- (void)onInteractionLabelLogicSetIconPlaying:(_Bool)arg1 reset:(_Bool)arg2;
- (void)onInteractionLabelLogicSwitchToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)fetchThemeColor;
- (void)layoutSubviews;
- (void)generateViews;
- (id)initWithFrame:(struct CGRect)arg1 labelInfo:(id)arg2 dataItem:(id)arg3 scene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

