//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>

@optional
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
@end

