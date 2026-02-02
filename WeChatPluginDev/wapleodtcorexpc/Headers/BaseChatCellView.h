//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BaseChatViewModel, NSString;
@protocol MessageNodeViewDelegate;

@interface BaseChatCellView : UIView
{
    id <MessageNodeViewDelegate> m_delegate;
    BaseChatViewModel *m_viewModel;
    struct CGSize m_layoutSize;
    _Bool m_isLayouting;
    _Bool _useLightStyle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(nonatomic) _Bool isLayouting; // @synthesize isLayouting=m_isLayouting;
@property(readonly, nonatomic) BaseChatViewModel *viewModel; // @synthesize viewModel=m_viewModel;
@property(nonatomic) __weak id <MessageNodeViewDelegate> delegate; // @synthesize delegate=m_delegate;
- (double)chatViewControllerWidth;
- (id)getCurrViewController;
- (_Bool)isShowInSubScene;
- (_Bool)disableImplicitAnimations;
- (void)onDisappear;
- (void)onAppear;
- (void)layoutFinished;
- (_Bool)userInteractionEnabledWhenEditing;
- (_Bool)needUpdateLightStyle;
- (_Bool)isUseLightStyle;
- (void)layoutInternal;
- (void)layoutSubviews;
- (void)resetLayoutCache;
- (_Bool)shouldLayoutIfNeeded;
- (_Bool)canBeReused;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

