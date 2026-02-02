//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPageViewCursorView, MMUIView, NSArray, NSString;
@protocol MJPageViewDataSource, MJPageViewInnerProtocol;

@interface MJPageViewTitleView
{
    id <MJPageViewDataSource> _dataSource;
    id <MJPageViewInnerProtocol> _delegate;
    NSArray *_items;
    MMUIView *_contentView;
    MJPageViewCursorView *_cursor;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MJPageViewCursorView *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MJPageViewInnerProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MJPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)changeCursorProgress:(double)arg1;
- (void)changeSelectedFrom:(long long)arg1 to:(long long)arg2 animated:(_Bool)arg3;
- (void)didTappedTitleItem:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

