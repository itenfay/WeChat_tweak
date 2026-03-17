//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, PDFActionRemoteGoTo, PDFView, UIViewController;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (UIViewController *)PDFViewParentViewController;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
@end

