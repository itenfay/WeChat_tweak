//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewDiffableDataSource.h>

@protocol LVDiffableDataSourceDelegate;

@interface LVDiffableDataSource : UITableViewDiffableDataSource
{
    id <LVDiffableDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LVDiffableDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;

@end

