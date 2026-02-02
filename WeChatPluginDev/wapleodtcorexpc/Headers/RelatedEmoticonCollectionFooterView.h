//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMTerminatorView, MMUIActivityIndicatorView, MMUILabel;

@interface RelatedEmoticonCollectionFooterView : UICollectionReusableView
{
    MMTerminatorView *_terminatorView;
    MMUIActivityIndicatorView *_indicatorView;
    MMUILabel *_loadingTipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *loadingTipView; // @synthesize loadingTipView=_loadingTipView;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) MMTerminatorView *terminatorView; // @synthesize terminatorView=_terminatorView;
- (void)onNoMore;
- (void)onLoading;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

