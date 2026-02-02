//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLimitedModeSetPasswordLogic, NSString;

@interface MMLimitedSetPasswordUseCase : NSObject
{
    MMLimitedModeSetPasswordLogic *_setPasswordLogic;
    CDUnknownBlockType _resolve;
    id _selfHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id selfHolder; // @synthesize selfHolder=_selfHolder;
@property(copy, nonatomic) CDUnknownBlockType resolve; // @synthesize resolve=_resolve;
@property(retain, nonatomic) MMLimitedModeSetPasswordLogic *setPasswordLogic; // @synthesize setPasswordLogic=_setPasswordLogic;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (id)wechatClearPassword;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

