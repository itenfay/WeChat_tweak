//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, NSString, RichTextView, TLProfileModel, UIButton;
@protocol TLProfileDetailContentViewDelegate;

@interface TLProfileDetailContentView : UIView
{
    _Bool _isAtDragDownState;
    _Bool _forceShowIconDesc;
    id <TLProfileDetailContentViewDelegate> _delegate;
    TLProfileModel *_tlProfile;
    CContact *_contact;
    long long _currentScene;
    UIButton *_bgButton;
    RichTextView *_descTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) long long currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) TLProfileModel *tlProfile; // @synthesize tlProfile=_tlProfile;
@property(nonatomic) _Bool forceShowIconDesc; // @synthesize forceShowIconDesc=_forceShowIconDesc;
@property(nonatomic) _Bool isAtDragDownState; // @synthesize isAtDragDownState=_isAtDragDownState;
@property(nonatomic) __weak id <TLProfileDetailContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enableBackgroundButton;
- (_Bool)shouldHideContentAtDragDown;
- (double)contentBottomPadding;
- (double)contentHorizonPadding;
- (double)contentTopPadding;
- (void)onClickAtBackgroundView:(id)arg1;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)initUI;
- (struct CGSize)sizeToFitWidth:(double)arg1;
- (void)updateSourceViewSizeWithWidth:(double)arg1;
- (void)updateDescLabelSizeWithWidth:(double)arg1;
- (void)updateWithTLProfileModel:(id)arg1;
- (id)getTLProfileModel;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScene:(long long)arg1;
- (id)initWithScene:(long long)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

