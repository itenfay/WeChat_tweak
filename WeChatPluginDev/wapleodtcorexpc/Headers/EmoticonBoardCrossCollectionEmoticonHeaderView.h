//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class EmoticonBoardCrossCollectionEmoticonHeaderModel, MMBadgeView, MMUILabel, MMWebImageView, NSString, PersonalDesigner, UIImageView, UILabel, UITapGestureRecognizer, UIView, WXKeyBoardTipsView;

@interface EmoticonBoardCrossCollectionEmoticonHeaderView : UICollectionReusableView
{
    EmoticonBoardCrossCollectionEmoticonHeaderModel *_viewModel;
    CDUnknownBlockType _actionBlock;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGestureRecongnizer;
    MMUILabel *_designerNameLabel;
    MMWebImageView *_designerHeadView;
    UIImageView *_entryTipView;
    UIImageView *_rightArrow;
    MMBadgeView *_badgeView;
    UIView *_voiceOverView;
    WXKeyBoardTipsView *_keyboardTipsView;
    PersonalDesigner *_designer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(retain, nonatomic) WXKeyBoardTipsView *keyboardTipsView; // @synthesize keyboardTipsView=_keyboardTipsView;
@property(retain, nonatomic) UIView *voiceOverView; // @synthesize voiceOverView=_voiceOverView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UIImageView *entryTipView; // @synthesize entryTipView=_entryTipView;
@property(retain, nonatomic) MMWebImageView *designerHeadView; // @synthesize designerHeadView=_designerHeadView;
@property(retain, nonatomic) MMUILabel *designerNameLabel; // @synthesize designerNameLabel=_designerNameLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecongnizer; // @synthesize tapGestureRecongnizer=_tapGestureRecongnizer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onGetDesignerForDesignerUin:(unsigned int)arg1 AndDesigner:(id)arg2;
- (void)jumpToPlugin;
- (void)handleSingleTap:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
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

