//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MMBGMCategoryViewModelDelegate;

@interface MMBGMCategoryViewModel : NSObject
{
    id <MMBGMCategoryViewModelDelegate> _delegate;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MMBGMCategoryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genDiffableDataSourceSnapshot;
- (id)musicCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)fetchData;

@end

