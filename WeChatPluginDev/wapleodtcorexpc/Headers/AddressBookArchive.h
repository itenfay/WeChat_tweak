//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface AddressBookArchive : NSObject
{
    NSMutableSet *_phones;
    NSMutableSet *_emails;
}

+ (void)initialize;
+ (void)PBArrayAdd_emails;
+ (void)PBArrayAdd_phones;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) NSMutableSet *phones; // @synthesize phones=_phones;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

