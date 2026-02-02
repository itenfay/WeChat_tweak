//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MVStat22259 : NSObject
{
    NSMutableArray *_commonParams;
    NSMutableArray *_params;
}

+ (id)infoWithSessionId:(id)arg1 editSessionId:(id)arg2 musicInfo:(id)arg3 songId:(id)arg4 partNum:(int)arg5 createType:(unsigned long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *commonParams; // @synthesize commonParams=_commonParams;
- (void)setPageType:(unsigned long long)arg1;
- (void)setHideMaterialCount:(unsigned long long)arg1;
- (void)setTransition:(unsigned long long)arg1;
- (void)setMaterialCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2;
- (void)setCreateType:(unsigned long long)arg1;
- (void)setReqId:(id)arg1;
- (void)setEnterScene:(unsigned long long)arg1;
- (void)setIsNullBeforeSelect:(_Bool)arg1;
- (void)setIsEdit:(_Bool)arg1;
- (void)setFeedFrom:(unsigned long long)arg1;
- (void)setThisPart:(int)arg1;
- (void)setMaterialPos:(int)arg1;
- (void)setExpId:(id)arg1;
- (void)setKeyword:(id)arg1;
- (void)setFeedUin:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setMvClipFillStatus:(id)arg1;
- (void)setIsFinderNew:(_Bool)arg1;
- (void)setMvObjectId:(id)arg1;
- (void)updateMyFinderId;
- (void)setIsSave:(_Bool)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)sortMaterial;
- (void)zoomTimeScrollView;
- (void)clickReplayBtn;
- (void)changeTransition:(unsigned long long)arg1;
- (void)appearMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 reqId:(id)arg4 feedFrom:(unsigned long long)arg5;
- (void)postSucceed:(id)arg1;
- (void)saveDraft:(_Bool)arg1 mvClipFillStatus:(id)arg2;
- (void)cancelPost:(id)arg1;
- (void)clickPost;
- (void)post:(_Bool)arg1;
- (void)donePreview:(unsigned long long)arg1;
- (void)doneEditToPreview:(id)arg1 imgCount:(unsigned long long)arg2 videoCount:(unsigned long long)arg3;
- (void)removeMaterial:(id)arg1 authorId:(id)arg2 pageType:(unsigned long long)arg3;
- (void)changeMode:(unsigned long long)arg1;
- (void)cancelEditMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(_Bool)arg6 isCut:(_Bool)arg7 reqId:(id)arg8;
- (void)doneEditMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(_Bool)arg6 isCut:(_Bool)arg7 reqId:(id)arg8;
- (void)searchMaterial:(id)arg1;
- (void)selectMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(_Bool)arg6 reqId:(id)arg7 pageType:(unsigned long long)arg8;
- (void)enterEditView:(unsigned long long)arg1;
- (id)getSessionId;
- (void)commit;
- (void)reset;
- (id)logExt;
- (id)init;

@end

