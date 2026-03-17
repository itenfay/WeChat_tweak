//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LVDiffableDataSource, NSIndexPath;

@protocol LVDiffableDataSourceDelegate <NSObject>
- (void)diffableDataSource:(LVDiffableDataSource *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

