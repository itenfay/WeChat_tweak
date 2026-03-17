//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, TableViewCellExposureHelper, UITableViewCellExposureInfo, UITableViewSectionExposureInfo;

@protocol TableViewCellExposureDelegate <NSObject>
- (void)onSectionListExposure:(NSArray *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewListExposure:(NSArray *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getItemCellViewRect:(NSIndexPath *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getSectionRect:(unsigned long long)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (struct CGRect)getExposureVisibleRect:(TableViewCellExposureHelper *)arg1;

@optional
- (void)onSectionEndExposure:(UITableViewSectionExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onSectionStartExposure:(UITableViewSectionExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewEndExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
- (void)onItemCellViewStartExposure:(UITableViewCellExposureInfo *)arg1 helper:(TableViewCellExposureHelper *)arg2;
@end

