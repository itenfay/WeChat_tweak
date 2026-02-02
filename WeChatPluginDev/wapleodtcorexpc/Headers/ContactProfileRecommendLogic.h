//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock;

@interface ContactProfileRecommendLogic
{
    struct XSummary m_profileRecommendSummary;
    _Bool m_profileRecommendSummaryInitSuccess;
    NSRecursiveLock *m_lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getFriendProfileRecommendInputInfoInHello:(id)arg1;
- (id)getFriendProfileRecommendInputInfo:(id)arg1;
- (id)getContactProfileRemarkRecommend:(id)arg1;
- (_Bool)checkContactRemarkSummaryInitSuccess;
- (_Bool)checkModelFilesExist;
- (void)InitModel;
- (id)init;

@end

