//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogBaseViewController;
@protocol FaceRecogBaseViewDelegate;

@interface FaceRecogBaseView
{
    id <FaceRecogBaseViewDelegate> _delegate;
    FaceRecogBaseViewController *_vc;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FaceRecogBaseViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak id <FaceRecogBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)procedureDidDoneLoading;
- (void)setTip:(id)arg1 animated:(_Bool)arg2;
- (void)setTip:(id)arg1;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(_Bool)arg3;
- (void)procedureDidFinish;
- (void)procedureDidDetectFace;
- (void)procedureDidStartDetectFace;
- (void)viewDidAppear;
- (void)attachPreviewLayer:(id)arg1;
- (void)initView;
- (void)cancelButtonDone;
- (void)initCancelBtn;

@end

