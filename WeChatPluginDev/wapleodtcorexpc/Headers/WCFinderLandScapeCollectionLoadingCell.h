//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderAnimationLoadingView;

@interface WCFinderLandScapeCollectionLoadingCell : UICollectionViewCell
{
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)stopLoading;
- (void)startLoading;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

