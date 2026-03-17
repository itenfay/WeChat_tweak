//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTCanvasItemCellViewModel, MMUIViewController;
@protocol WXCustomWebViewControllerProtocol;

@protocol BTCanvasItemCellViewModelDelegate <NSObject>
- (void)onAdCanvasViewTouchEnd:(BTCanvasItemCellViewModel *)arg1;
- (void)onCanvasItemClick:(BTCanvasItemCellViewModel *)arg1;
- (void)onCanvasHeightChange:(BTCanvasItemCellViewModel *)arg1;
- (_Bool)isMsgViewControllerInForground;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;
@end

