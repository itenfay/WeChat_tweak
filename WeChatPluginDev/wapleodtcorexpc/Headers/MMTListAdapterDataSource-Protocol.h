//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTListAdapter, MMTListSectionController, NSArray;

@protocol MMTListAdapterDataSource <NSObject>
- (MMTListSectionController *)listAdapter:(MMTListAdapter *)arg1 sectionControllerForObject:(id)arg2;
- (NSArray *)objectsForListAdapter:(MMTListAdapter *)arg1;
@end

