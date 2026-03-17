//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIImage, UITableView;

@protocol MMTableViewIndexViewDelegate <NSObject>
- (long long)mmcurrentIndexForTableView:(UITableView *)arg1;
- (long long)mmtableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)mmsectionIndexTitlesForTableView:(UITableView *)arg1;

@optional
- (_Bool)mmForceUseSpecialIndexShapeTableView:(UITableView *)arg1;
- (NSString *)mmtableView:(UITableView *)arg1 accessibilityValueForSectionIndexTitle:(NSString *)arg2;
- (_Bool)mmforceUseTableView:(UITableView *)arg1;
- (UIImage *)mmimageTableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (UIColor *)mmindexViewColor;
@end

