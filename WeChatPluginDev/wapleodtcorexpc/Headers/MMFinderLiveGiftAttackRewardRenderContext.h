//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GiftAttackRenderScriptObj, MMWeEffectManager, NSValue;

@interface MMFinderLiveGiftAttackRewardRenderContext : NSObject
{
    MMWeEffectManager *_weeffectManager;
    NSValue *_renderRegion;
    NSValue *_startPos;
    long long _renderScriptId;
    GiftAttackRenderScriptObj *_renderScript;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GiftAttackRenderScriptObj *renderScript; // @synthesize renderScript=_renderScript;
@property(nonatomic) long long renderScriptId; // @synthesize renderScriptId=_renderScriptId;
@property(retain, nonatomic) NSValue *startPos; // @synthesize startPos=_startPos;
@property(retain, nonatomic) NSValue *renderRegion; // @synthesize renderRegion=_renderRegion;
@property(retain, nonatomic) MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
- (_Bool)isValid;

@end

