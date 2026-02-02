//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLoadingView, MMUIWindow, NSString;
@protocol PreEnterStepDelegate;

@interface PreEnterBaseStep : NSObject
{
    MMUIWindow *m_window;
    MMLoadingView *m_loadingView;
    id <PreEnterStepDelegate> _delegate;
}

+ (_Bool)checkDeviceUUIDMatch:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PreEnterStepDelegate> delegate; // @synthesize delegate=_delegate;
- (id)topViewController;
- (id)rootMMViewController;
- (void)stopLoading;
- (void)startLoading;
- (void)doneStepAndClose;
- (void)closeFirstView;
- (void)openFirstViewAndSetEmptyMMVCAsRoot;
- (void)openFirstView;
- (void)startStep;
@property(readonly, nonatomic) NSString *stepId;
- (void)dealloc;

@end

