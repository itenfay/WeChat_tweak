//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJRulerView, MJTimeRulerViewLayout;
@protocol MJTimelineVisibleRectDataSource;

@interface MJTimeRulerView : UIView
{
    MJRulerView *_backingRulerView;
    id <MJTimelineVisibleRectDataSource> _dataSource;
    MJTimeRulerViewLayout *_layout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJTimeRulerViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <MJTimelineVisibleRectDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)redrawTimeRulerMarks;
- (void)bindViews;
- (void)setupViews;
- (id)initWithLayout:(id)arg1;

@end

