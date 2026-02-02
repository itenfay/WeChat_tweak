//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ContactUpdateHelper : NSObject
{
    NSString *_m_moduleName;
    NSString *_m_userName;
    CDUnknownBlockType _m_block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_block; // @synthesize m_block=_m_block;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
@property(retain, nonatomic) NSString *m_moduleName; // @synthesize m_moduleName=_m_moduleName;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)clearBlock;
- (void)updateStangerContact;
- (_Bool)strangerContactToBlock;
- (_Bool)normalContactToBlock;
- (void)startWithUserName:(id)arg1 onUpdate:(CDUnknownBlockType)arg2;
- (id)initWithModuleName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

