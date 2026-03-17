//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFTSFavMgrExt <NSObject>

@optional
- (void)onFTSDetailPageFavResultChanged;
- (void)onFTSHomePageFavResultChanged;
- (void)onFTSFavResultChanged:(NSString *)arg1;
@end

