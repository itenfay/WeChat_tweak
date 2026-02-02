//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface WCPinBottomPinnedItemBackgroundView : UICollectionReusableView
{
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)layoutSubviews;
- (void)initBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

