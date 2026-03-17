//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSURL, UIActivityViewController, UIDocumentBrowserViewController;

@protocol UIDocumentBrowserViewControllerDelegate <NSObject>

@optional
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 willPresentActivityViewController:(UIActivityViewController *)arg2;
- (NSArray *)documentBrowser:(UIDocumentBrowserViewController *)arg1 applicationActivitiesForDocumentURLs:(NSArray *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 failedToImportDocumentAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didImportDocumentAtURL:(NSURL *)arg2 toDestinationURL:(NSURL *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didRequestDocumentCreationWithHandler:(void (^)(NSURL *, unsigned long long))arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickDocumentURLs:(NSArray *)arg2;
@end

