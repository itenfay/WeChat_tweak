//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath, UITableView;
@protocol WCFinderCustomPagingDelegate;

@interface WCFinderCustomPaging : NSObject
{
    _Bool _magicAdjustDecelerating;
    _Bool _footerViewDisplayed;
    id <WCFinderCustomPagingDelegate> _delegate;
    UITableView *_tableView;
    NSIndexPath *_beginDraggingIndexPath;
    struct CGPoint _targetContentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *beginDraggingIndexPath; // @synthesize beginDraggingIndexPath=_beginDraggingIndexPath;
@property(nonatomic) _Bool footerViewDisplayed; // @synthesize footerViewDisplayed=_footerViewDisplayed;
@property(nonatomic) _Bool magicAdjustDecelerating; // @synthesize magicAdjustDecelerating=_magicAdjustDecelerating;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderCustomPagingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableViewBeginDeceleratingWithSpeed:(double)arg1;
- (void)tableViewBeginDecelerating;
@property(readonly, nonatomic) _Bool isAnimating;
- (_Bool)_isSplitCellAtIdx:(long long)arg1;
- (struct CGRect)targetFrameForSlideStop;
- (struct CGRect)targetFrameForSlideDown;
- (struct CGRect)targetFrameForSlideUp;
- (void)tableViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (_Bool)isTableViewFooterViewDisplayed;
- (void)tableViewWillBeginDragging;
- (id)initWithTableView:(id)arg1;

@end

