//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerManagerOptionObj, WCFinderCameraViewModel;

@interface MMMusicCameraViewController
{
    WCFinderCameraViewModel *_viewModel;
    MMImagePickerManagerOptionObj *_optionObj;
    double _curVideoDuration;
    double _videoDurationLimit;
}

- (void).cxx_destruct;
@property(nonatomic) double videoDurationLimit; // @synthesize videoDurationLimit=_videoDurationLimit;
@property(nonatomic) double curVideoDuration; // @synthesize curVideoDuration=_curVideoDuration;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(retain, nonatomic) WCFinderCameraViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onMovieCompressFinished:(id)arg1;
- (void)closeAfterDone;
- (void)changeCameraCaptureSessionToRun:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2 andVideoDurationLimit:(double)arg3;

@end

