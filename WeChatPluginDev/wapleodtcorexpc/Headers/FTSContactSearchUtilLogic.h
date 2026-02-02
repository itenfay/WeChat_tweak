//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSContactDB, FTSContactSearchTask, NSMutableArray, NSString;

@interface FTSContactSearchUtilLogic : NSObject
{
    FTSContactSearchTask *m_targetTask;
    FTSContactDB *m_ftsContactDB;
    NSString *m_currentSearchText;
    NSMutableArray *m_arrFilteredContacts;
    unsigned int m_eFTSSearchType;
    CDUnknownBlockType _m_resultBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_resultBlock; // @synthesize m_resultBlock=_m_resultBlock;
- (void)onContactSearchTaskFinish:(id)arg1;
- (_Bool)fillResultWithSearchType:(unsigned long long)arg1;
- (void)resetTargetTask;
- (void)setNewestQuery:(id)arg1;
- (void)asynSearchFriendContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

