//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderQCCodeNameCardViewModel : NSObject
{
    WCFinderContact *_contact;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)onFinderContactUpdate:(id)arg1;
- (id)authInfo;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

