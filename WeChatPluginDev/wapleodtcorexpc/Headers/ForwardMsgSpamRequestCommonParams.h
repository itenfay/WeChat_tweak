//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ForwardMsgSpamRequestCommonParams : NSObject
{
    _Bool _ignoreOverSeaUser;
    _Bool _ignoreMsgFromSelf;
    _Bool _isRepeat;
    _Bool _isSwitchOff;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isSwitchOff; // @synthesize isSwitchOff=_isSwitchOff;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(nonatomic) _Bool ignoreMsgFromSelf; // @synthesize ignoreMsgFromSelf=_ignoreMsgFromSelf;
@property(nonatomic) _Bool ignoreOverSeaUser; // @synthesize ignoreOverSeaUser=_ignoreOverSeaUser;

@end

