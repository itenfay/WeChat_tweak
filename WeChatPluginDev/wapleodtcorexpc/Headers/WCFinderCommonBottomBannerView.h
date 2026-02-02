//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderFeedContentVM;
@protocol WCFinderCommonBottomViewDelegate;

@interface WCFinderCommonBottomBannerView : UIView
{
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _bannerType;
    id <WCFinderCommonBottomViewDelegate> _delegate;
    CDUnknownBlockType _hiddenBottomBannerViewBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hiddenBottomBannerViewBlock; // @synthesize hiddenBottomBannerViewBlock=_hiddenBottomBannerViewBlock;
@property(nonatomic) __weak id <WCFinderCommonBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;

@end

