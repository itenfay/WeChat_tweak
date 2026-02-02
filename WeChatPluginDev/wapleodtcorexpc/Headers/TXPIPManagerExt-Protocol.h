//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPIPCustomHandleLogic;

@protocol TXPIPManagerExt <NSObject>

@optional
- (void)onPIPHandleLogicConfig:(WCPIPCustomHandleLogic *)arg1;
- (void)onEnableDisplayVideoSrcChange:(_Bool)arg1;
- (void)onStartCustomPixelTransferChange;
- (void)onAttachWidgetsChange;
- (void)onNewPixelBufferRefresh;
@end

