//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, PDFDocument, PDFView, UIColor;

@interface MMPDFPreviewController
{
    PDFDocument *_pdfDocument;
    PDFView *_pdfView;
    UIColor *_pdfViewBackgroundColor;
    NSURL *_pdfFileURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *pdfFileURL; // @synthesize pdfFileURL=_pdfFileURL;
@property(retain, nonatomic) UIColor *pdfViewBackgroundColor; // @synthesize pdfViewBackgroundColor=_pdfViewBackgroundColor;
@property(retain, nonatomic) PDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(retain, nonatomic) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (void)loadPDFWithFileURL:(id)arg1;
- (void)viewDidLoad;
- (_Bool)shouldHandleSingleTapAt:(id)arg1;
- (void)loadFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

