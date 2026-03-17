//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAdRandomPickCardLogic;

@protocol WCAdRandomPickCardItemsViewDelegate <NSObject>

@optional
- (void)onRandomPickCardItemsQuickSwitchAnimationIsDone;
- (_Bool)onRandomPickCardItemsIsReadyToPlayQuickSwitchAnimation;
- (_Bool)onRandomPickCardItemsIsCardSelectedPreviouslyWithCardId:(NSString *)arg1;
- (_Bool)onRandomPickCardItemsIsCardSelectedWithCardId:(NSString *)arg1;
- (void)onRandomPickCardItemsPlayBackgroundAnimationWithStatus:(long long)arg1;
- (void)onRandomPickCardItemsUpdateContainerViewStatus:(long long)arg1;
- (void)onRandomPickCardItemsItemViewDidClick:(NSString *)arg1 index:(unsigned long long)arg2;
- (WCAdRandomPickCardLogic *)onRandomPickCardItemsFetchPickCardLogic;
- (NSString *)onRandomPickCardItemsFetchCanvasPageId;
@end

