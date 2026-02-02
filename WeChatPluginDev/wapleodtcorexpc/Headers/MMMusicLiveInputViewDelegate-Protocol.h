//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMMusicLiveInputViewDelegate <NSObject>
- (void)hideSendLocationHintView:(_Bool)arg1;
- (void)didSendLocation;
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (void)didCommitText:(NSString *)arg1;

@optional
- (_Bool)inputToolDisableExpression;
@end

