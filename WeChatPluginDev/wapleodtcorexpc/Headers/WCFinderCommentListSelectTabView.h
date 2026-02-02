//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, WCFinderCustomImageRichTextView;
@protocol WCFinderCommentListSelectTabViewDelegate;

@interface WCFinderCommentListSelectTabView : UIView
{
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _willUnSelectBlock;
    CDUnknownBlockType _shopReportDictBlock;
    id <WCFinderCommentListSelectTabViewDelegate> _delegate;
    UIView *_lineView;
    MMUIButton *_commentButton;
    MMUIButton *_shopCommentButton;
    MMUIButton *_selectedButton;
    UIView *_bottomLine;
    WCFinderCustomImageRichTextView *_rightLinkView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *rightLinkView; // @synthesize rightLinkView=_rightLinkView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak MMUIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) MMUIButton *shopCommentButton; // @synthesize shopCommentButton=_shopCommentButton;
@property(retain, nonatomic) MMUIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id <WCFinderCommentListSelectTabViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType shopReportDictBlock; // @synthesize shopReportDictBlock=_shopReportDictBlock;
@property(copy, nonatomic) CDUnknownBlockType willUnSelectBlock; // @synthesize willUnSelectBlock=_willUnSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateCommentStr:(id)arg1 shopCommentStr:(id)arg2 linkText:(id)arg3;
- (void)reloadLayout;
- (void)clickButtonAction:(id)arg1;
@property(readonly, nonatomic) unsigned long long selectedType;
- (_Bool)hasDisplayRightLink;
- (void)setupRightLinkView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

