//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIActivityIndicatorView, UILabel, UITapGestureRecognizer, UIView;
@protocol EmoticonStoreMoreManualFetchFooterViewDelegate;

@interface EmoticonStoreMoreManualFetchFooterView : UICollectionReusableView
{
    _Bool _isLoading;
    id <EmoticonStoreMoreManualFetchFooterViewDelegate> _delegate;
    UIView *_contentView;
    UILabel *_hintLabel;
    MMUIActivityIndicatorView *_indicator;
    UITapGestureRecognizer *_recognizer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <EmoticonStoreMoreManualFetchFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forceTriggerTap;
- (void)onTap;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)setupGesture;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

