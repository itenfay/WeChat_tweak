//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableAttributedString, NSString, UITableView, UIView;

@interface WCTableViewSectionManager : NSObject
{
    _Bool _bDrawNoSeparator;
    _Bool _bDrawSeparatorBetweenCells;
    _Bool _shouldRefreshHeaderAtSizeChange;
    _Bool _shouldRefreshFooterAtSizeChange;
    unsigned long long _cellMode;
    UIView *_headerView;
    UIView *_footerView;
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSMutableAttributedString *_attributedHeaderTitle;
    NSMutableAttributedString *_attributedFooterTitle;
    double _fHeaderHeight;
    double _fFooterHeight;
    double _fTopLineLeftInset;
    double _fTopLineRightInset;
    double _fBottomLineLeftInset;
    double _fBottomLineRightInset;
    id _userInfo;
    UITableView *_tableView;
    NSMutableArray *_cells;
    double _lastTableWidth;
}

+ (id)sectionInfoFooterWithView:(id)arg1;
+ (id)sectionInfoHeaderWithView:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionInfoFooter:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoDefaut;
+ (id)sectionWithHeaderView:(id)arg1 FooterView:(id)arg2;
+ (id)sectionWithFooterView:(id)arg1;
+ (id)sectionWithHeaderView:(id)arg1;
+ (id)sectionWithHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionWithFooter:(id)arg1;
+ (id)sectionWithHeader:(id)arg1;
+ (id)defaultSection;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRefreshFooterAtSizeChange; // @synthesize shouldRefreshFooterAtSizeChange=_shouldRefreshFooterAtSizeChange;
@property(nonatomic) _Bool shouldRefreshHeaderAtSizeChange; // @synthesize shouldRefreshHeaderAtSizeChange=_shouldRefreshHeaderAtSizeChange;
@property(nonatomic) double lastTableWidth; // @synthesize lastTableWidth=_lastTableWidth;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool bDrawSeparatorBetweenCells; // @synthesize bDrawSeparatorBetweenCells=_bDrawSeparatorBetweenCells;
@property(nonatomic) _Bool bDrawNoSeparator; // @synthesize bDrawNoSeparator=_bDrawNoSeparator;
@property(nonatomic) double fBottomLineRightInset; // @synthesize fBottomLineRightInset=_fBottomLineRightInset;
@property(nonatomic) double fBottomLineLeftInset; // @synthesize fBottomLineLeftInset=_fBottomLineLeftInset;
@property(nonatomic) double fTopLineRightInset; // @synthesize fTopLineRightInset=_fTopLineRightInset;
@property(nonatomic) double fTopLineLeftInset; // @synthesize fTopLineLeftInset=_fTopLineLeftInset;
@property(nonatomic) double fFooterHeight; // @synthesize fFooterHeight=_fFooterHeight;
@property(nonatomic) double fHeaderHeight; // @synthesize fHeaderHeight=_fHeaderHeight;
@property(copy, nonatomic) NSMutableAttributedString *attributedFooterTitle; // @synthesize attributedFooterTitle=_attributedFooterTitle;
@property(copy, nonatomic) NSMutableAttributedString *attributedHeaderTitle; // @synthesize attributedHeaderTitle=_attributedHeaderTitle;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long cellMode; // @synthesize cellMode=_cellMode;
- (void)removeCellAt:(unsigned long long)arg1;
- (id)getCellAt:(unsigned long long)arg1;
- (id)getAllCells;
- (unsigned long long)getCellCount;
- (void)insertCell:(id)arg1 At:(unsigned int)arg2;
- (id)getFooterView;
- (id)getHeaderView;
- (id)makeViewWith:(id)arg1 attributedTitle:(id)arg2 topPading:(double)arg3 bottomPadding:(double)arg4;
- (void)didBeClickedAt:(id)arg1;
- (void)addCell:(id)arg1;
- (id)init;

@end

