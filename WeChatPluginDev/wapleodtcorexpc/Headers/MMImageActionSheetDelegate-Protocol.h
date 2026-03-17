//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageActionSheet, MMImageActionSheetItem, NSArray, NSString, UIImage;

@protocol MMImageActionSheetDelegate <NSObject>

@optional
- (void)onShowTranslateImage:(UIImage *)arg1;
- (NSString *)translateImageIdentifier;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onQRCodeScansFinished;
- (_Bool)imageActionSheet:(MMImageActionSheet *)arg1 shouldShowItem:(MMImageActionSheetItem *)arg2;
- (void)imageActionSheetDidCancel:(MMImageActionSheet *)arg1;
- (_Bool)imageActionSheet:(MMImageActionSheet *)arg1 itemDidCustomEvent:(MMImageActionSheetItem *)arg2;
- (void)imageActionSheet:(MMImageActionSheet *)arg1 itemWillClicked:(MMImageActionSheetItem *)arg2;
- (void)imageActionSheet:(MMImageActionSheet *)arg1 itemDidClicked:(MMImageActionSheetItem *)arg2;
- (void)imageActionSheet:(MMImageActionSheet *)arg1 itemDidAppear:(MMImageActionSheetItem *)arg2;
- (NSArray *)customItemsArrayForImageActionSheet:(MMImageActionSheet *)arg1;
@end

