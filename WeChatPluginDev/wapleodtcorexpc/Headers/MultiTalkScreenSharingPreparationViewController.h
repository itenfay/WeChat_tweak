//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;
@protocol MultiTalkScreenSharingPreparationViewControllerDelegate;

@interface MultiTalkScreenSharingPreparationViewController
{
    _Bool _startButtonClicked;
    id <MultiTalkScreenSharingPreparationViewControllerDelegate> _delegate;
    UIButton *_startButton;
    NSString *_fileValidationPath;
    long long _fileValidationStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long fileValidationStatus; // @synthesize fileValidationStatus=_fileValidationStatus;
@property(copy, nonatomic) NSString *fileValidationPath; // @synthesize fileValidationPath=_fileValidationPath;
@property(nonatomic) _Bool startButtonClicked; // @synthesize startButtonClicked=_startButtonClicked;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) __weak id <MultiTalkScreenSharingPreparationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMultiTalkScreenSharingFinishValidatingFileWithPath:(id)arg1 ret:(int)arg2 fileStatus:(int)arg3;
- (void)onMultiTalkScreenSharingStartValidatingFileWithPath:(id)arg1;
- (void)fileValidationDidTimeOut;
- (void)validateFileIfNeeded;
- (void)didSetTargetViewController:(id)arg1;
- (void)didFailToStartPresentation;
- (void)didStartPresentation;
- (void)didFinishFileValidation;
- (void)startButtonClicked:(id)arg1;
- (void)loadStartButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (id)init;

@end

