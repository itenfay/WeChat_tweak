//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FaceRecogPrivateVerifyHandlerDelegate <NSObject>
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(NSString *)arg2 verifyResult:(NSString *)arg3;
@end

