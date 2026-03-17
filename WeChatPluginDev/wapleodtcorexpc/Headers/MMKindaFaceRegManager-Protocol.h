//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidBoolStringI32StringCallback, MMVoidCallback, NSString;

@protocol MMKindaFaceRegManager <NSObject>
- (void)startFaceImpl:(int)arg1 strPackage:(NSString *)arg2 strPackageSign:(NSString *)arg3 finishCallback:(MMVoidBoolStringI32StringCallback *)arg4 cancelCallback:(MMVoidCallback *)arg5 otherVerifyTitle:(NSString *)arg6 faceVerifyTitle:(NSString *)arg7;
- (void)startFaceImpl:(int)arg1 strPackage:(NSString *)arg2 strPackageSign:(NSString *)arg3 finishCallback:(MMVoidBoolStringI32StringCallback *)arg4 cancelCallback:(MMVoidCallback *)arg5 otherVerifyTitle:(NSString *)arg6;
@end

