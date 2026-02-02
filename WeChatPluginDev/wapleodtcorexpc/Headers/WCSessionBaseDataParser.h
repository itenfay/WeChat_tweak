//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSessionBaseDataParser
{
}

- (id)parseSessionUBAUnitConfigModel:(id)arg1;
- (id)parseSessionUBAConfigModels:(id)arg1;
- (id)parseViewOperationConfigModel:(id)arg1;
- (id)parseDataPathConfigModel:(id)arg1;
- (id)parsePagePathUnitConfigModel:(id)arg1;
- (id)parsePagePathConfigModel:(id)arg1 withSessionPageId:(id)arg2 withReport:(_Bool)arg3;
- (id)parseSessionConfigModel:(id)arg1;
- (id)parseSessionFlowConfigModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

