//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class WCMusicFooterNoMoreView, WCMusicLoadingHintView;

@interface WCMusicFooterHintView : UICollectionReusableView
{
    unsigned long long _mode;
    WCMusicLoadingHintView *_loadingView;
    WCMusicFooterNoMoreView *_noMoreView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicFooterNoMoreView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(retain, nonatomic) WCMusicLoadingHintView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

