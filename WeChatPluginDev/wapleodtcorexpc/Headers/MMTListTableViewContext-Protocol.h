//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTListSectionController, NSIndexPath, NSString, UITableView, UITableViewCell;

@protocol MMTListTableViewContext <NSObject>
@property(nonatomic) __weak UITableView *tableView;
- (id)objectForSectionController:(MMTListSectionController *)arg1;
- (NSIndexPath *)indexPathForSectionController:(MMTListSectionController *)arg1 index:(long long)arg2;
- (UITableViewCell *)cellForItemAtIndex:(long long)arg1 sectionController:(MMTListSectionController *)arg2;
- (void)deselectRowAtIndex:(long long)arg1 sectionController:(MMTListSectionController *)arg2 animated:(_Bool)arg3;
- (UITableViewCell *)dequeueReusableCellOfClass:(Class)arg1 withReuseIdentifier:(NSString *)arg2 forSectionController:(MMTListSectionController *)arg3 atIndex:(long long)arg4;
- (UITableViewCell *)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(MMTListSectionController *)arg2 atIndex:(long long)arg3;
@end

