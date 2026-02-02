//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMUILabel, NSString, SolitaireItem, UIView;
@protocol SolitaireDisplayTableViewCellDelegate;

@interface SolitaireDisplayTableViewCell
{
    id <SolitaireDisplayTableViewCellDelegate> _delegate;
    MMUILabel *_orderNumberLabel;
    MMGrowTextView *_contentGrowTextView;
    UIView *_contentTextContainerView;
    SolitaireItem *_solitaireItem;
    NSString *_indexStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *indexStr; // @synthesize indexStr=_indexStr;
@property(retain, nonatomic) SolitaireItem *solitaireItem; // @synthesize solitaireItem=_solitaireItem;
@property(retain, nonatomic) UIView *contentTextContainerView; // @synthesize contentTextContainerView=_contentTextContainerView;
@property(retain, nonatomic) MMGrowTextView *contentGrowTextView; // @synthesize contentGrowTextView=_contentGrowTextView;
@property(retain, nonatomic) MMUILabel *orderNumberLabel; // @synthesize orderNumberLabel=_orderNumberLabel;
@property(nonatomic) __weak id <SolitaireDisplayTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidDeleteToNil;
- (void)keyboardWillShow:(double)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)layoutSubviews;
- (id)getGrowTextView;
- (_Bool)isExample;
- (void)textViewBecomeFirstResponder;
- (void)configureCellWith:(id)arg1 withIndexStr:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

