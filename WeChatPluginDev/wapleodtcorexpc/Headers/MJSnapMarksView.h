//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJRulerView, MJSnapMarksViewLayout;
@protocol MJTimelineVisibleRectDataSource;

@interface MJSnapMarksView : UIView
{
    MJRulerView *_backingRulerView;
    id <MJTimelineVisibleRectDataSource> _dataSource;
    MJSnapMarksViewLayout *_layout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJSnapMarksViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <MJTimelineVisibleRectDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)redrawSnapMarks;
- (void)bindViews;
- (void)setupViews;
- (id)initWithLayout:(id)arg1;

@end

