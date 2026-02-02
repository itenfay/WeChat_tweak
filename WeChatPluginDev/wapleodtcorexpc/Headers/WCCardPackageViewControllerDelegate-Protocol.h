//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCardData;

@protocol WCCardPackageViewControllerDelegate <NSObject>

@optional
- (void)onCardShareComplete;
- (void)onCardPackageViewSelectCardItem:(WCCardData *)arg1;
@end

