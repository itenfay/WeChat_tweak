//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMPickLocationDataActionDelegate <NSObject>
- (void)searchResultSelectStateChange:(_Bool)arg1;
- (void)didClearSearchAnnotations:(NSArray *)arg1;
@end

