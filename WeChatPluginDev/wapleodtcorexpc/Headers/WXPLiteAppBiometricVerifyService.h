//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WXPLiteAppBiometricVerifyService : NSObject
{
    CDUnknownBlockType _biometricVerifyCallback;
}

@property(copy, nonatomic) CDUnknownBlockType biometricVerifyCallback; // @synthesize biometricVerifyCallback=_biometricVerifyCallback;
- (void)authenticate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cancelAuthenticate;
- (id)supportBioType;

@end
