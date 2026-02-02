//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString;

@interface WCFinderCommentMentionInfo : NSObject
{
    NSString *_username;
    unsigned long long _start;
    unsigned long long _length;
    CContact *_mentionContact;
}

+ (id)infoWithUsername:(id)arg1 data:(id)arg2;
+ (id)infoWithUsername:(id)arg1 range:(struct _NSRange)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_length;
+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_username;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *mentionContact; // @synthesize mentionContact=_mentionContact;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)archivedWithoutUsername;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

