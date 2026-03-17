//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderLiveIconImageView;

@interface MMFinderLiveStatusIconShareView : NSObject
{
    WCFinderLiveIconImageView *_statusView;
}

@property(retain, nonatomic) WCFinderLiveIconImageView *statusView; // @synthesize statusView=_statusView;
- (void)refreshStatusViewWithShareItem:(id)arg1;
- (void)reloadStatusViewIfNeededWithStyle:(unsigned long long)arg1;
- (void)refreshStatusView;
- (void)refreshSubviews;

@end

