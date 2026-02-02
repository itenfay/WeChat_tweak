//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCSnsPrivacyReporter : NSObject
{
    NSMutableSet *_cachedMemeberSet;
    NSMutableSet *_initialMemberSet;
    NSMutableSet *_importFromGroupSet;
    NSMutableSet *_importFromSelectSet;
    NSMutableSet *_removedMemberSet;
    unsigned int _startTime;
    unsigned int _stayTimeInSec;
    _Bool _bOutsider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bOutsider; // @synthesize bOutsider=_bOutsider;
- (void)finishByCancel:(_Bool)arg1;
- (id)formatUsrs:(id)arg1;
- (void)disselecteMember:(id)arg1;
- (void)importFromSelectMembers:(id)arg1;
- (void)importFromGroupMembers:(id)arg1;
- (void)setInitailMembers:(id)arg1;
- (void)beginSetting;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

