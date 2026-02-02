//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKErrorRecoveryAttempter, NSError;
@protocol FBSDKGraphErrorRecoveryProcessorDelegate;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject
{
    FBSDKErrorRecoveryAttempter *_recoveryAttempter;
    NSError *_error;
    id <FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKGraphErrorRecoveryProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPresentErrorWithRecovery:(_Bool)arg1 contextInfo:(void *)arg2;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (void)displayAlertWithRecoverySuggestion:(id)arg1 recoveryOptionsTitles:(id)arg2;
- (_Bool)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

