//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel, UIScrollView, WCFinderTLRegardfulAuthorScrollView;

@interface WCFinderTLRegardfulAuthorView : UIView
{
    _Bool _showProfile;
    _Bool _reorder;
    _Bool _isDismissing;
    UIScrollView *_contentView;
    UILabel *_titleLabelView;
    NSMutableArray *_dataArray;
    WCFinderTLRegardfulAuthorScrollView *_scrollView;
    NSMutableArray *_cellViewArray;
    CDUnknownBlockType _showBlock;
    CDUnknownBlockType _dismissBlock;
    UIView *_showView;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool reorder; // @synthesize reorder=_reorder;
@property(nonatomic) _Bool showProfile; // @synthesize showProfile=_showProfile;
@property(nonatomic) __weak UIView *showView; // @synthesize showView=_showView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(retain, nonatomic) NSMutableArray *cellViewArray; // @synthesize cellViewArray=_cellViewArray;
@property(retain, nonatomic) WCFinderTLRegardfulAuthorScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak UILabel *titleLabelView; // @synthesize titleLabelView=_titleLabelView;
@property(nonatomic) __weak UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getAllLiveContentVMArray;
- (void)reportLiveCardExposeIfNeeded:(id)arg1;
- (void)clickContactCell:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setItemViewAlpha:(id)arg1;
- (void)_reloadData;
- (void)setUpUI;
- (void)reloadSort;
- (void)reloadData:(id)arg1;
- (void)reloadOftenReadBar:(id)arg1;
@property(readonly, nonatomic) _Bool isShow;
- (void)show;
- (void)dismissAuthorView;
- (void)panAction;
- (id)initWithShowView:(id)arg1 showBlock:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

