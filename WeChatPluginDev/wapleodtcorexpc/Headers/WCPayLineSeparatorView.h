//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCPayLineSeparatorView : UIView
{
    _Bool _needLine;
    NSArray *_views;
    double _interval;
    double _lineX;
}

- (void).cxx_destruct;
@property double lineX; // @synthesize lineX=_lineX;
@property _Bool needLine; // @synthesize needLine=_needLine;
@property double interval; // @synthesize interval=_interval;
@property(retain) NSArray *views; // @synthesize views=_views;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateViews:(id)arg1 interval:(double)arg2 needLine:(_Bool)arg3 lineX:(double)arg4;
- (void)updateViews:(id)arg1 interval:(double)arg2 needLine:(_Bool)arg3;

@end

