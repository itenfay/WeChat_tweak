//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WAMainFrameTaskBarSectionViewModel : NSObject
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
- (id)deleteDataForIndex:(long long)arg1;
- (long long)allCount;
- (long long)count;
- (id)itemsCopy;
- (id)dataForIndex:(long long)arg1;
- (void)fillItems:(id)arg1;

@end

