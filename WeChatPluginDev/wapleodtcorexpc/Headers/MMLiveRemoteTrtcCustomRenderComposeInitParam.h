//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeeffectRenderContextWrapper;

@interface MMLiveRemoteTrtcCustomRenderComposeInitParam : NSObject
{
    _Bool _enableRCI;
    long long _weffectScene;
    WeeffectRenderContextWrapper *_sharedRenderContext;
    unsigned long long _workingMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableRCI; // @synthesize enableRCI=_enableRCI;
@property(nonatomic) unsigned long long workingMode; // @synthesize workingMode=_workingMode;
@property(retain, nonatomic) WeeffectRenderContextWrapper *sharedRenderContext; // @synthesize sharedRenderContext=_sharedRenderContext;
@property(nonatomic) long long weffectScene; // @synthesize weffectScene=_weffectScene;

@end

