//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJShootVisagePanelViewModel : NSObject
{
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)loadItems:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

