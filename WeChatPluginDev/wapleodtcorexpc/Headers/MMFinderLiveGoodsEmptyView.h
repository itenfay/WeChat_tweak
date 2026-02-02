//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderDirectAddPreviousLiveProductsPageInfo, NSString, RichTextView;
@protocol MMFinderLiveGoodsEmptyViewDelegate;

@interface MMFinderLiveGoodsEmptyView : UIView
{
    _Bool _isLastLayoutOrientationIsPortrait;
    _Bool _forceLayoutUI;
    id <MMFinderLiveGoodsEmptyViewDelegate> _delegate;
    FinderDirectAddPreviousLiveProductsPageInfo *_addPreviousLiveProductsPageInfo;
    RichTextView *_textView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceLayoutUI; // @synthesize forceLayoutUI=_forceLayoutUI;
@property(nonatomic) _Bool isLastLayoutOrientationIsPortrait; // @synthesize isLastLayoutOrientationIsPortrait=_isLastLayoutOrientationIsPortrait;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) FinderDirectAddPreviousLiveProductsPageInfo *addPreviousLiveProductsPageInfo; // @synthesize addPreviousLiveProductsPageInfo=_addPreviousLiveProductsPageInfo;
@property(nonatomic) __weak id <MMFinderLiveGoodsEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)textFont;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

