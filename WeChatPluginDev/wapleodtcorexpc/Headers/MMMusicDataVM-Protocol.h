//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, NSString;

@protocol MMMusicDataVM <NSObject>
- (MMMusicFinderVideoCellModel *)getDataById:(NSString *)arg1;
- (unsigned long long)indexOfData:(MMMusicFinderVideoCellModel *)arg1;
- (MMMusicFinderVideoCellModel *)dataOfIndex:(long long)arg1;
- (long long)numberOfItemsInSection;
@end

