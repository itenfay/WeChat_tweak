//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveCompleteViewReplaySettingsStandardStrategy : NSObject
{
    _Bool _commentConversionEnabled;
    _Bool _membersExclusiveEnabled;
    _Bool _membersExclusiveCapable;
}

@property(nonatomic) _Bool membersExclusiveCapable; // @synthesize membersExclusiveCapable=_membersExclusiveCapable;
@property(nonatomic) _Bool membersExclusiveEnabled; // @synthesize membersExclusiveEnabled=_membersExclusiveEnabled;
@property(nonatomic) _Bool commentConversionEnabled; // @synthesize commentConversionEnabled=_commentConversionEnabled;
@property(readonly, nonatomic) unsigned long long applicableOptions;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
- (id)initWithMembersExclusiveCapability:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

