//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXPLiteAppBiometricVerifyService : NSObject
{
    CDUnknownBlockType _biometricVerifyCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType biometricVerifyCallback; // @synthesize biometricVerifyCallback=_biometricVerifyCallback;
- (void)authenticate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cancelAuthenticate;
- (id)supportBioType;

@end

