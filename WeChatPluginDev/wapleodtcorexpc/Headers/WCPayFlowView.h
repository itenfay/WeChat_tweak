//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCPayFlowView : UIView
{
    NSArray *_views;
    double _interval;
}

- (void).cxx_destruct;
@property double interval; // @synthesize interval=_interval;
@property(retain) NSArray *views; // @synthesize views=_views;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateViews:(id)arg1 interval:(double)arg2;

@end

