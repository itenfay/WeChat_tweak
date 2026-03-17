//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, WCFilterView;

@protocol WCFilterViewDelegate <NSObject>
- (MMUIViewController *)getCurrentViewController;

@optional
- (void)onSelectionPanelDismissed:(WCFilterView *)arg1;
- (void)onCleanBtnClickAtSection:(unsigned int)arg1;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
@end

