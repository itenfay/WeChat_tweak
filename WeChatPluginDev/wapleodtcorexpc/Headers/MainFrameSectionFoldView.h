//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MFBannerBtn;
@protocol MainFrameSectionFoldViewDelegate;

@interface MainFrameSectionFoldView : UIView
{
    _Bool _hideBottomLine;
    _Bool _isFolding;
    id <MainFrameSectionFoldViewDelegate> _delegate;
    long long _foldCount;
    UIView *_topSeparatorView;
    MFBannerBtn *_bannerBtn;
    UIView *_bottomSeparatorView;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) MFBannerBtn *bannerBtn; // @synthesize bannerBtn=_bannerBtn;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) long long foldCount; // @synthesize foldCount=_foldCount;
@property(nonatomic) _Bool isFolding; // @synthesize isFolding=_isFolding;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) __weak id <MainFrameSectionFoldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSingleTap;
- (void)layoutSubviews;
- (void)setIsFolding:(_Bool)arg1 foldCount:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)reuseIdentifier;

@end

