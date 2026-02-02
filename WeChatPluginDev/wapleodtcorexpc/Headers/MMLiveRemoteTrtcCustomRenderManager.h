//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableDictionary;

@interface MMLiveRemoteTrtcCustomRenderManager : NSObject
{
    struct X3DGlobalContext sharedGlobalContext;
    MMLiveTaskId *_liveTaskId;
    NSMutableDictionary *_remoteTrtcCustomRenderWrapperDict;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *remoteTrtcCustomRenderWrapperDict; // @synthesize remoteTrtcCustomRenderWrapperDict=_remoteTrtcCustomRenderWrapperDict;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)destroyCustomRenderWrapper:(id)arg1;
- (void)stopCustomRenderForAllRemoteTrtcUsers;
- (void)addCustomRenderWrapper:(id)arg1 userId:(id)arg2;
- (id)getCustomRenderWrapper:(id)arg1 scene:(long long)arg2 autoCreateIfNotExist:(_Bool)arg3;
- (id)getCustomRenderWrapper:(id)arg1 scene:(long long)arg2;
- (void *)getShareGlobalContextPtr;
- (void)configSharedGlobalContext;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

@end

