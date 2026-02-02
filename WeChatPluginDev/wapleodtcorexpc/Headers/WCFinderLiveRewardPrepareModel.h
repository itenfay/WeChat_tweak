//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGiftAttackCtx, FinderLiveGiftRandomCtx, FinderLivePkValueExtraCtx, NSData, NSDictionary, NSMutableDictionary;

@interface WCFinderLiveRewardPrepareModel : NSObject
{
    unsigned long long _scene;
    FinderLiveGiftRandomCtx *_randomCtx;
    FinderLiveGiftAttackCtx *_attackCtx;
    FinderLivePkValueExtraCtx *_pkValueCtx;
    NSDictionary *_bufferMap;
    NSMutableDictionary *_mBufferMap;
}

+ (id)CreatePrepareModelWithScene:(unsigned long long)arg1 sceneFlag:(unsigned long long)arg2 rewardPrepareResp:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mBufferMap; // @synthesize mBufferMap=_mBufferMap;
@property(retain, nonatomic) NSDictionary *bufferMap; // @synthesize bufferMap=_bufferMap;
@property(retain, nonatomic) FinderLivePkValueExtraCtx *pkValueCtx; // @synthesize pkValueCtx=_pkValueCtx;
@property(retain, nonatomic) FinderLiveGiftAttackCtx *attackCtx; // @synthesize attackCtx=_attackCtx;
@property(retain, nonatomic) FinderLiveGiftRandomCtx *randomCtx; // @synthesize randomCtx=_randomCtx;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSData *ctxBuf;
@property(readonly, nonatomic) NSData *prepareBuf;
- (id)init;

@end

