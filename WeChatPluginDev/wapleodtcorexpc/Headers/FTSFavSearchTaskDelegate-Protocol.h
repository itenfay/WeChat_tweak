//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FTSFavSearchTask;

@protocol FTSFavSearchTaskDelegate <NSObject>
- (void)onFavSearchTaskResultChanged:(_Bool)arg1 taskObj:(FTSFavSearchTask *)arg2;
@end

