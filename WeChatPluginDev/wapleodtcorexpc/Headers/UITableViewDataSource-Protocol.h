//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, UITableView, UITableViewCell;

@protocol UITableViewDataSource <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;

@optional
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (long long)tableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
- (NSArray *)sectionIndexTitlesForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForFooterInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
@end

