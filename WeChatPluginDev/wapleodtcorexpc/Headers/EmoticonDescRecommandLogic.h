//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAsyncBlockOperation, NSDictionary, NSOperationQueue, NSString;
@protocol EmoticonDescRecommandLogicDelegate;

@interface EmoticonDescRecommandLogic : NSObject
{
    _Bool _needRebuildDesc;
    _Bool _needLoadCustomEmotionDesc;
    unsigned int _maxIndexCount;
    int _cacheVersion;
    unsigned int _maxLengthForCustomDesc;
    id <EmoticonDescRecommandLogicDelegate> _delegate;
    NSOperationQueue *_configQueue;
    NSOperationQueue *_searchQueue;
    NSString *_waitToSearchKeyword;
    MMAsyncBlockOperation *_lastSearchOperation;
    NSDictionary *_emoticonDescToMd5Cache;
    NSDictionary *_packageIndex;
    NSDictionary *_descAliasDic;
    NSDictionary *_descToCustomMd5Cache;
}

+ (void)showCustomEmoticonMeaningDebugViewInVC:(id)arg1;
+ (id)adjustedStringWithDesc:(id)arg1;
+ (id)filterNotInDBEmoticons:(id)arg1;
+ (id)filterNoImageEmoticons:(id)arg1;
+ (id)asyncSearchForKeyword:(id)arg1 descToMd5Cache:(id)arg2 cacheVersion:(int)arg3 packageIndex:(id)arg4 descAliasDic:(id)arg5 descToCustomMd5Cache:(id)arg6 maxLengthForCustomDesc:(unsigned int)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *descToCustomMd5Cache; // @synthesize descToCustomMd5Cache=_descToCustomMd5Cache;
@property(nonatomic) unsigned int maxLengthForCustomDesc; // @synthesize maxLengthForCustomDesc=_maxLengthForCustomDesc;
@property(nonatomic) _Bool needLoadCustomEmotionDesc; // @synthesize needLoadCustomEmotionDesc=_needLoadCustomEmotionDesc;
@property(nonatomic) int cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(retain, nonatomic) NSDictionary *descAliasDic; // @synthesize descAliasDic=_descAliasDic;
@property(retain, nonatomic) NSDictionary *packageIndex; // @synthesize packageIndex=_packageIndex;
@property(retain, nonatomic) NSDictionary *emoticonDescToMd5Cache; // @synthesize emoticonDescToMd5Cache=_emoticonDescToMd5Cache;
@property(nonatomic) _Bool needRebuildDesc; // @synthesize needRebuildDesc=_needRebuildDesc;
@property __weak MMAsyncBlockOperation *lastSearchOperation; // @synthesize lastSearchOperation=_lastSearchOperation;
@property(retain, nonatomic) NSString *waitToSearchKeyword; // @synthesize waitToSearchKeyword=_waitToSearchKeyword;
@property(retain, nonatomic) NSOperationQueue *searchQueue; // @synthesize searchQueue=_searchQueue;
@property(retain, nonatomic) NSOperationQueue *configQueue; // @synthesize configQueue=_configQueue;
@property(nonatomic) unsigned int maxIndexCount; // @synthesize maxIndexCount=_maxIndexCount;
@property(nonatomic) __weak id <EmoticonDescRecommandLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLocalRecommendLocalEmojiOcrResultUpdate;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)continueSearchIfNeeded;
- (void)updateDescToMd5Cache:(id)arg1 FromEmoticonPackageDesc:(id)arg2;
- (void)rebuildDescToMd5CacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasLoadMd5Cache;
- (_Bool)isInWordList:(id)arg1;
- (void)searchEmoticonWithKeyword:(id)arg1;
- (void)loadDescAliasConfigDir:(id)arg1;
- (void)asyncLoadDescAliasConfigDir:(id)arg1;
- (void)loadCustonEmoticonDescWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setNeedsReloadCustomEmoticonDesc;
- (void)reloadDataAndNeedClearCache:(_Bool)arg1;
- (void)loadDataIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

