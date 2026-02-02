//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCalRqtDataMgr
{
}

- (_Bool)p_needCalRqtData:(int)arg1 uin:(unsigned long long)arg2;
- (id)calFullSpeRqtData:(const void *)arg1 len:(unsigned long long)arg2 type:(int)arg3;
- (id)calJsApiSpeRqtData:(const void *)arg1 len:(unsigned int)arg2 type:(int)arg3;
- (unsigned int)calRqtData:(const void *)arg1 len:(unsigned int)arg2 cmd:(int)arg3 uin:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

