//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderProfileNewLifePageModel, WCFinderStreamProfileViewController;

@protocol WCFinderProfileNewLifePageModelDelegate <NSObject>
- (void)onNewLifePageModelMoveFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onNewLifePageModelReload;
- (void)onNewLifePageModelRefreshHeader;
- (void)onNewLifePageModelFetchStateChanged:(WCFinderProfileNewLifePageModel *)arg1;
- (void)onNewLifePageModelDeleteAtIndex:(unsigned long long)arg1;
- (void)onNewLifePageModelAppendFromRange:(struct _NSRange)arg1 countAfterAppend:(unsigned long long)arg2;
- (void)onNewLifePageModelStartPost:(NSString *)arg1;
- (WCFinderStreamProfileViewController *)profileViewController;
@end

