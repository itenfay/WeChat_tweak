//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class CAGradientLayer, NSString, TextStateEmojiBoardReportObject, TextStateEmojiBoardView, TextStatePublishCustomIconView, TextStatePublishIconList, TextStatePublishOfficialIconCollectionView, TextStatePublishRecentUseIconView, TextStatePublishReportObject, UIView;
@protocol TextStatePublishCustomIconViewDelegate;

@interface TextStatePublishIconPickerView : UIScrollView
{
    CDUnknownBlockType _iconPickHandler;
    TextStatePublishIconList *_publishIconList;
    id <TextStatePublishCustomIconViewDelegate> _customIconViewDelegate;
    TextStatePublishReportObject *_reportObject;
    TextStateEmojiBoardReportObject *_emojiBoardReportObject;
    unsigned long long _components;
    UIView *_contentView;
    UIView *_sideView;
    TextStatePublishCustomIconView *_customIconView;
    TextStatePublishRecentUseIconView *_recentUseIconView;
    TextStatePublishOfficialIconCollectionView *_recommendIconView;
    TextStateEmojiBoardView *_emojiBoardView;
    CAGradientLayer *_gradientMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) TextStateEmojiBoardView *emojiBoardView; // @synthesize emojiBoardView=_emojiBoardView;
@property(retain, nonatomic) TextStatePublishOfficialIconCollectionView *recommendIconView; // @synthesize recommendIconView=_recommendIconView;
@property(retain, nonatomic) TextStatePublishRecentUseIconView *recentUseIconView; // @synthesize recentUseIconView=_recentUseIconView;
@property(retain, nonatomic) TextStatePublishCustomIconView *customIconView; // @synthesize customIconView=_customIconView;
@property(retain, nonatomic) UIView *sideView; // @synthesize sideView=_sideView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long components; // @synthesize components=_components;
@property(retain, nonatomic) TextStateEmojiBoardReportObject *emojiBoardReportObject; // @synthesize emojiBoardReportObject=_emojiBoardReportObject;
@property(retain, nonatomic) TextStatePublishReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(nonatomic) __weak id <TextStatePublishCustomIconViewDelegate> customIconViewDelegate; // @synthesize customIconViewDelegate=_customIconViewDelegate;
@property(retain, nonatomic) TextStatePublishIconList *publishIconList; // @synthesize publishIconList=_publishIconList;
@property(copy, nonatomic) CDUnknownBlockType iconPickHandler; // @synthesize iconPickHandler=_iconPickHandler;
- (void)onTextStateIconUpdate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onRecentUseIconListCleared;
- (void)onSelectRecentUseIcon:(id)arg1;
- (void)onSelectOfficialIcon:(id)arg1;
- (void)hideEmojiBoardWithAnimation;
- (void)showEmojiBoardWithAnimation;
- (void)onEmojiBoardItemSelected:(id)arg1 groupDescription:(id)arg2;
- (id)autoReplacedIconWithDescription:(id)arg1;
- (void)onSwitchIconButtonSelected:(_Bool)arg1 customIconView:(id)arg2;
- (void)onDescrpitionTextDidBeginEditing:(id)arg1;
- (void)onTextExceedMaxLength:(id)arg1;
- (void)onTapDoneButton:(id)arg1;
- (void)onTapCancelButton:(id)arg1;
- (void)onTapNonexpandedView:(id)arg1;
- (_Bool)shrinkCustomIconView:(id)arg1;
- (void)shrinkCustomIconViewIfNeeded;
- (_Bool)enableDragToClose;
- (void)refresh;
- (void)resetToTop;
- (double)customIconExpandHeight;
- (void)updateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateGradientLayer;
- (void)initGradientLayer;
- (void)initSubviews;
- (id)initWithComponents:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

