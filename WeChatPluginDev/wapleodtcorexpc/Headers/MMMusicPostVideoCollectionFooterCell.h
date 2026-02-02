//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIActivityIndicatorView, UIImageView;

@interface MMMusicPostVideoCollectionFooterCell : UICollectionReusableView
{
    MMUIActivityIndicatorView *m_loadingView;
    UIImageView *m_pageEndImageView;
}

+ (struct CGSize)getFooterViewSize:(double)arg1;
+ (id)reuseKeyStr;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1;
- (void)setLoadingVisible:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

