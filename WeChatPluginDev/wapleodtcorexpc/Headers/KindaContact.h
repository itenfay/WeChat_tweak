//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaContact : NSObject
{
    NSString *_m_username;
    NSString *_m_displayName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_displayName; // @synthesize m_displayName=_m_displayName;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username=_m_username;
- (id)displayName;
- (id)userName;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

