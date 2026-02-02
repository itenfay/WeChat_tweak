//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderQRCodeViewModelDelegate <NSObject>
- (void)handleFinderFeedQRCodeUrlFailureWithErrorCode:(int)arg1 errorMsg:(NSString *)arg2;
- (void)handleFinderFeedQRCodeUrlSuccess;
- (void)handleFinderUserQRCodeUrlFailure;
- (void)handleFinderUserQRCodeUrlSuccess;
@end

