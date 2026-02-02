//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderFollowBtnViewModel : NSObject
{
    _Bool _isPrivate;
    unsigned long long _followState;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) unsigned long long followState; // @synthesize followState=_followState;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)postChangeFollowStateRequest;
- (void)dealloc;
- (unsigned long long)nextFollowAction;
- (_Bool)isSelfContact;
- (void)updateWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

