//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLiveBeautyOperationPanelDelegate <NSObject>
- (void)closeContainerView;
- (void)onExitChangeDetailMode;
- (void)onTappedresetDefaultValueButton;
- (void)onSliderValueChange;

@optional
- (void)onMMLiveBeautyOperationPanelClose:(_Bool)arg1;
@end

