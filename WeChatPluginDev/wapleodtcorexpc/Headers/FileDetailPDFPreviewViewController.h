//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol UIGestureRecognizerDelegate;

@interface FileDetailPDFPreviewViewController
{
    id <UIGestureRecognizerDelegate> _recognizeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> recognizeDelegate; // @synthesize recognizeDelegate=_recognizeDelegate;
- (_Bool)shouldHandleSingleTapAt:(id)arg1;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithRecognizeDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

