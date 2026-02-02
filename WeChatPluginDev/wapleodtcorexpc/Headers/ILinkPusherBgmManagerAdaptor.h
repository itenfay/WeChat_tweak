//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXAudioEffectManager;

@interface ILinkPusherBgmManagerAdaptor : NSObject
{
    TXAudioEffectManager *_audioEffectManager;
}

+ (void)destroySharedIntance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) TXAudioEffectManager *audioEffectManager; // @synthesize audioEffectManager=_audioEffectManager;
- (id)getAudioEffectManager;
- (void)dealloc;
- (id)initInternal;

@end

