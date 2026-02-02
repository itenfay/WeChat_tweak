//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol IWCUIKitInputControllerDelegate;

@interface WCUIKitInputControllerProxy : NSObject
{
    id <IWCUIKitInputControllerDelegate> _delegate;
}

+ (long long)getInputControlerModeWith:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IWCUIKitInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getVisibleHeight;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (id)getGrowTextView;
- (id)getInputControllerWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

