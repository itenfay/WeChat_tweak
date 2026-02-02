//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BizRecentReadNoMoreDataLabel, MMUIImageView;

@interface BizRecentReadFooter : UIView
{
    BizRecentReadNoMoreDataLabel *_noMoreDataView;
    MMUIImageView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) BizRecentReadNoMoreDataLabel *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
- (void)setState:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)init;

@end

