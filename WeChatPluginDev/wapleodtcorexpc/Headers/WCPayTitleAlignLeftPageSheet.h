//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, NSString, PopUpWithHalfDialog, UILabel, UIView, WCPayWebImageView;
@protocol WCPayTitleAlignLeftPageSheetDelegate;

@interface WCPayTitleAlignLeftPageSheet : NSObject
{
    double _imgWidthHeightRatio;
    id <WCPayTitleAlignLeftPageSheetDelegate> _delegate;
    PopUpWithHalfDialog *_pageData;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCPayWebImageView *_contentImgView;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(retain, nonatomic) WCPayWebImageView *contentImgView; // @synthesize contentImgView=_contentImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PopUpWithHalfDialog *pageData; // @synthesize pageData=_pageData;
@property(nonatomic) __weak id <WCPayTitleAlignLeftPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double imgWidthHeightRatio; // @synthesize imgWidthHeightRatio=_imgWidthHeightRatio;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)dismissPageSheet;
- (void)setupDetailView;
- (void)showPageSheet;
- (void)updateDetailViewWithPopUpDialogData:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

