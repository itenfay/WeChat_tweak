//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface BrandFlowListLogic : NSObject
{
    _Bool _isFetching;
    unsigned int _sceneToAppendUrl;
    unsigned int _subSceneToAppendUrl;
    NSData *_lastRequestBuffer;
}

+ (void)reportExposeToSvrWithScene:(unsigned int)arg1 cellModel:(id)arg2 cellPos:(unsigned int)arg3;
+ (void)sendFeedBackReqWithModel:(id)arg1 selectedReasonArr:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int subSceneToAppendUrl; // @synthesize subSceneToAppendUrl=_subSceneToAppendUrl;
@property(nonatomic) unsigned int sceneToAppendUrl; // @synthesize sceneToAppendUrl=_sceneToAppendUrl;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) NSData *lastRequestBuffer; // @synthesize lastRequestBuffer=_lastRequestBuffer;
- (void)refreshSceneToAppendUrlWithCurArrData:(id)arg1;
- (id)convertRecommendCardMsg2BrandFlowLisCellModel:(id)arg1;
- (id)loadRequestBuffer;
- (void)finallyHandleWithRecommendCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleResp:(id)arg1 scene:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRecommendDataWithScene:(unsigned long long)arg1 enterScene:(unsigned int)arg2 curArrData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

