//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface WCFinderMusicTopicDataProvider : NSObject
{
    int _commentScene;
    NSString *_registerExtKey;
    NSString *_feedId;
    unsigned long long _musicTopicId;
    NSString *_encryptedMusicId;
    NSData *_byPassInfo;
    NSString *_refObjectid;
    CDUnknownBlockType _block;
    NSMutableDictionary *_listRespInfoDic;
    NSMutableDictionary *_cgiPromiseDic;
    NSMutableDictionary *_loadingStateDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadingStateDic; // @synthesize loadingStateDic=_loadingStateDic;
@property(retain, nonatomic) NSMutableDictionary *cgiPromiseDic; // @synthesize cgiPromiseDic=_cgiPromiseDic;
@property(retain, nonatomic) NSMutableDictionary *listRespInfoDic; // @synthesize listRespInfoDic=_listRespInfoDic;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *encryptedMusicId; // @synthesize encryptedMusicId=_encryptedMusicId;
@property(nonatomic) unsigned long long musicTopicId; // @synthesize musicTopicId=_musicTopicId;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *registerExtKey; // @synthesize registerExtKey=_registerExtKey;
- (id)getTargetLoadingStateByInnerType:(int)arg1;
- (id)getCgiPromiseArray;
- (id)getTargetDetailViewModelByInnerType:(int)arg1;
- (id)getTargetContentVMArrayByInnerType:(int)arg1;
- (_Bool)svrDataAvailable;
- (_Bool)containTargetInnerType:(int)arg1;
- (void)updateProviderByOutterByInnerType:(int)arg1 lastBuff:(id)arg2 continueFlag:(_Bool)arg3 upContinueFlag:(_Bool)arg4 downContinueFlag:(_Bool)arg5 totalCount:(unsigned long long)arg6 dataArray:(id)arg7 topicInfo:(id)arg8 similarFlag:(_Bool)arg9 poiTopicRecommendArray:(id)arg10 subTitle:(id)arg11 bgmInfo:(id)arg12 feedFollowPermissonFlag:(unsigned int)arg13 disabledFlag:(unsigned int)arg14;
- (void)fetchDataByInnerType:(int)arg1;
- (id)initMusicTopicId:(unsigned long long)arg1 encryptedMusicId:(id)arg2 byPassInfo:(id)arg3 commentScene:(int)arg4 refObjectid:(id)arg5;

@end

