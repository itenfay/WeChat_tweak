//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveTaskId : NSObject
{
    _Bool _isInitialAudience;
    unsigned long long _liveId;
    NSString *_anchorIdentityId;
    NSString *_exportId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(copy, nonatomic) NSString *anchorIdentityId; // @synthesize anchorIdentityId=_anchorIdentityId;
@property(nonatomic) _Bool isInitialAudience; // @synthesize isInitialAudience=_isInitialAudience;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)tryTransferToFinderTaskId;
- (_Bool)checkTaskIdType:(Class)arg1;
- (_Bool)checkTaskIdValid:(Class)arg1;
@property(readonly, nonatomic) _Bool isAudience;
@property(readonly, nonatomic) _Bool isAnchor;
- (_Bool)isValid;
- (id)taskKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)beautyLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

