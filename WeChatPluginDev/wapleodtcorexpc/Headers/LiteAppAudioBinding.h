//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WXAudioNative;

@interface LiteAppAudioBinding : NSObject
{
    WXAudioNative *_wxaudionative;
    NSString *_pkgPath;
    NSString *_appId;
    unsigned int _appUuid;
}

- (void).cxx_destruct;
- (void)releaseAudioNative;
- (id)getAudioFilePath:(id)arg1;
- (void)initAudioContext:(unsigned long long)arg1;
- (id)initWithJsContext:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

