//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageActionOpenWeAppListItem, NSMutableArray, QRCodeInMultiDisplayView;

@protocol MMImageOpenWeAppDelegate <NSObject>

@optional
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onOpenWeAppButtonsUpdated:(MMImageActionOpenWeAppListItem *)arg1 itemList:(NSMutableArray *)arg2;
- (void)onQRCodeScansFinished;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeRowViewTapped;
- (void)onAppendQRCodeMultiView:(QRCodeInMultiDisplayView *)arg1;
@end

