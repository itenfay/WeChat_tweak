//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TingUIState-Protocol.h"

@class NSString;

@interface TingUIStateCpp <TingUIState>
{
}

+ (id)create:(id)arg1 info:(id)arg2;
- (id)getStateInfo;
- (void)setStateInfo:(id)arg1;
- (id)getPlayTask;
- (void)setPlayTask:(id)arg1;
- (id)uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

