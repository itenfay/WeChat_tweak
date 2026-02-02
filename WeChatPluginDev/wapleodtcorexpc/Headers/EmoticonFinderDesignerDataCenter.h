//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EmoticonFinderDesignerDataCenter : NSObject
{
    _Bool _needStaticsInfo;
    unsigned int _designerUin;
    NSString *_sessionID;
    NSMutableArray *_storeItemList;
    NSMutableArray *_emojiInfoList;
    NSMutableArray *_ipSetList;
    NSMutableArray *_delegates;
    NSMutableDictionary *_hasMoreStatusDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *hasMoreStatusDict; // @synthesize hasMoreStatusDict=_hasMoreStatusDict;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSMutableArray *ipSetList; // @synthesize ipSetList=_ipSetList;
@property(retain, nonatomic) NSMutableArray *emojiInfoList; // @synthesize emojiInfoList=_emojiInfoList;
@property(retain, nonatomic) NSMutableArray *storeItemList; // @synthesize storeItemList=_storeItemList;
@property(nonatomic) _Bool needStaticsInfo; // @synthesize needStaticsInfo=_needStaticsInfo;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
- (void)addDelegate:(id)arg1;
- (void)onFetchEmoticonDataFailedForType:(int)arg1;
- (void)onFetchEmoticonFinishedForType:(int)arg1 hasMore:(_Bool)arg2;
- (void)onFirstFetchFailed;
- (void)onFirstFetchFinished;
- (void)onGotTotalEmoticonCount:(int)arg1 emojiCount:(int)arg2;
- (_Bool)hasMoreStatusForType:(unsigned long long)arg1;
- (void)fetchEmoticonDataFotType:(unsigned long long)arg1 andUsingOldReqBuf:(_Bool)arg2;
- (unsigned long long)totalEmojiCount;
- (unsigned long long)totalEmoticonCount;
- (void)startFirstFetch;
- (_Bool)hasCache;
- (_Bool)didFinishFirstFetch;
- (void)dealloc;
- (id)initWithDesignerUin:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

