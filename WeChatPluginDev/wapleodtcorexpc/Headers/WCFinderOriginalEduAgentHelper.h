//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderFeedContentVM;

@interface WCFinderOriginalEduAgentHelper : NSObject
{
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _type;
    MMUIViewController *_fromVC;
    unsigned long long _sourcePageType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sourcePageType; // @synthesize sourcePageType=_sourcePageType;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)interestsGuideClickEdu;
- (void)originalEduClickHelpEdu;
- (void)originalEduClickRewardEdu;
- (void)originalEduClickAcceptAction:(id)arg1;
- (void)originalEduClickRuleAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

