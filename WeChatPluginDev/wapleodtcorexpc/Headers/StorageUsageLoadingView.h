//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel;

@interface StorageUsageLoadingView : UIView
{
    MMUIActivityIndicatorView *m_loadingView;
    MMUILabel *m_subTitleLabel;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

