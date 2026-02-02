//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TextStateLikeData, WCCgiBlockHelper;
@protocol TextStateLikeLogicDelegate;

@interface TextStateLikeLogic : NSObject
{
    _Bool _useAffDB;
    id <TextStateLikeLogicDelegate> _delegate;
    WCCgiBlockHelper *_cgiBlockHelper;
    TextStateLikeData *_cachedLikeData;
    NSMutableDictionary *_idToLikeTypeDictForAff;
}

+ (id)generateClientIdForTextState:(id)arg1 isLike:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *idToLikeTypeDictForAff; // @synthesize idToLikeTypeDictForAff=_idToLikeTypeDictForAff;
@property(nonatomic) _Bool useAffDB; // @synthesize useAffDB=_useAffDB;
@property(retain, nonatomic) TextStateLikeData *cachedLikeData; // @synthesize cachedLikeData=_cachedLikeData;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(nonatomic) __weak id <TextStateLikeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCacheLikeData;
- (void)requestLikeForTextState:(id)arg1 isDelete:(_Bool)arg2 source:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeLikeWithTextStateId:(id)arg1;
- (void)addLikeWithTextStateId:(id)arg1 expireTime:(unsigned int)arg2;
- (void)putLikeTypeCache:(id)arg1 likeType:(long long)arg2;
- (_Bool)isLikeForTextStateWithId:(id)arg1;
- (void)performUnlikeForTextState:(id)arg1 source:(unsigned int)arg2;
- (void)performLikeForTextState:(id)arg1 source:(unsigned int)arg2;
- (void)saveData;
- (void)initData;
- (id)init;

@end

