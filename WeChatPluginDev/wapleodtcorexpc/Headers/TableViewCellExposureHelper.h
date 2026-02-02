//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableSet, UITableView;
@protocol TableViewCellExposureDelegate, UITableViewDelegate;

@interface TableViewCellExposureHelper
{
    double m_navBarAndStatusBarHeight;
    UITableView *m_tableView;
    NSMutableArray *m_cellViewIndexPaths;
    NSMutableSet *m_sectionIndexSet;
    double m_lastOffset;
    unsigned int _minScrollingThreshold;
    id <TableViewCellExposureDelegate> _delegate;
    id <UITableViewDelegate> _tableViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int minScrollingThreshold; // @synthesize minScrollingThreshold=_minScrollingThreshold;
@property(nonatomic) __weak id <UITableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(nonatomic) __weak id <TableViewCellExposureDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hookTagForSelector:(SEL)arg1;
- (id)calculateSectionAndGetExposureInfo:(unsigned long long)arg1;
- (id)calculateItemCellViewAndGetExposureInfo:(id)arg1;
- (struct CGRect)tableViewVisibleRect;
- (void)startCalculateSectionExposure;
- (void)startCalculateItemCellViewExposure;
- (void)hookUITableView;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

@end

