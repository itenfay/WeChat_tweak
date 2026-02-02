//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIView, NSString;
@protocol IWCUIKitGrowTextViewProtocol;

@protocol IWCUIKitInputControllerDelegate <NSObject>
- (double)getVisibleHeight;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewHeightDidChanged:(MMUIView<IWCUIKitGrowTextViewProtocol> *)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(NSString *)arg1;
@end

