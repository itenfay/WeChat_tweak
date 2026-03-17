//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface BiometricVerifyVoidStringBinaryCallback : NSObject
{
    CDUnknownBlockType _callBlock;
}

@property(copy, nonatomic) CDUnknownBlockType callBlock; // @synthesize callBlock=_callBlock;
- (void)call:(id)arg1 value2:(id)arg2;

@end
