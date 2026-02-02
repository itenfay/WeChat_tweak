//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface VoipOpenglesMgr
{
    _Bool _isApplicationStateActive;
    NSMutableArray *m_openglesContextArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isApplicationStateActive; // @synthesize isApplicationStateActive=_isApplicationStateActive;
@property(retain, nonatomic) NSMutableArray *m_openglesContextArray; // @synthesize m_openglesContextArray;
- (void)dealloc;
- (id)init;
- (id)requestContext;
- (void)removeContextThatMarkDeleted;
- (void)whenGoingToResign;
- (void)whenDidActive;
- (void)cleanContexts;
- (void)updateContextsApplicationStateProperty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

