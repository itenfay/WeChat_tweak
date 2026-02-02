//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OpenIMContactVerifyLogicDelegate;

@interface OpenIMContactVerifyLogic : NSObject
{
    NSMutableDictionary *m_dicWaitingCGIWrap;
    id <OpenIMContactVerifyLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenIMContactVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (void)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3 spamContext:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

