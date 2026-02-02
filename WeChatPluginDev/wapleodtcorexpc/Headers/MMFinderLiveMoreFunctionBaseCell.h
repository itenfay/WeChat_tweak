//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveMoreFunctionItem, NSIndexPath;
@protocol MMFinderLiveMoreFunctionBaseCellDelegate;

@interface MMFinderLiveMoreFunctionBaseCell : UITableViewCell
{
    _Bool _showRedDot;
    _Bool _layoutInFullWidth;
    MMFinderLiveMoreFunctionItem *_item;
    NSIndexPath *_indexPath;
    unsigned long long _rectCorner;
    id <MMFinderLiveMoreFunctionBaseCellDelegate> _delegate;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool layoutInFullWidth; // @synthesize layoutInFullWidth=_layoutInFullWidth;
@property(nonatomic) __weak id <MMFinderLiveMoreFunctionBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) unsigned long long rectCorner; // @synthesize rectCorner=_rectCorner;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) MMFinderLiveMoreFunctionItem *item; // @synthesize item=_item;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)updateCellIndexPath:(id)arg1;
- (void)updateCellWithItem:(id)arg1;

@end

