//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ShakeTvItem;

@protocol ScanTVDelegate <NSObject>
- (void)onGetTVItemFail:(NSString *)arg1;
- (void)onGetTVItem:(NSString *)arg1 TVItem:(ShakeTvItem *)arg2;
@end

