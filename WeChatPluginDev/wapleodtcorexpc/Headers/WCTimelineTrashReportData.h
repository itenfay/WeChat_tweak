//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineTrashReportData : NSObject
{
    unsigned int _likeCnt;
    unsigned int _commentCnt;
    unsigned int _exposeCnt;
    NSString *_publishId;
    NSString *_postSessionId;
    NSString *_sessionId;
    NSString *_exposeStartTime;
}

+ (void)reportClick:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 nextAction:(unsigned int)arg6 nextPublishId:(id)arg7;
+ (void)reportExpose:(id)arg1 likeCnt:(unsigned int)arg2 commentCnt:(unsigned int)arg3 postSessionId:(id)arg4 sessionId:(id)arg5 exposeStartTime:(id)arg6 exposeCnt:(unsigned int)arg7;
+ (void)initialize;
+ (void)PBArrayAdd_postSessionId;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_commentCnt;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_publishId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int exposeCnt; // @synthesize exposeCnt=_exposeCnt;
@property(retain, nonatomic) NSString *exposeStartTime; // @synthesize exposeStartTime=_exposeStartTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *postSessionId; // @synthesize postSessionId=_postSessionId;
@property(nonatomic) unsigned int commentCnt; // @synthesize commentCnt=_commentCnt;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt=_likeCnt;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
- (void)recordNextLocalId:(id)arg1 previousReportData:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

