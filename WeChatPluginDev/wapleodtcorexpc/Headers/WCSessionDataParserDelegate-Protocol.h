//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCDataPathConfigModel, WCPagePathConfigModel, WCPagePathUnitConfigModel, WCSessionConfigModel, WCSessionFlowConfigModel, WCSessionUBAConfigModel, WCSessionUBAUnitConfigModel, WCViewOperationConfigModel;

@protocol WCSessionDataParserDelegate <NSObject>
- (WCSessionUBAUnitConfigModel *)parseSessionUBAUnitConfigModel:(id)arg1;
- (WCSessionUBAConfigModel *)parseSessionUBAConfigModels:(id)arg1;
- (WCViewOperationConfigModel *)parseViewOperationConfigModel:(id)arg1;
- (WCDataPathConfigModel *)parseDataPathConfigModel:(id)arg1;
- (WCPagePathUnitConfigModel *)parsePagePathUnitConfigModel:(id)arg1;
- (WCPagePathConfigModel *)parsePagePathConfigModel:(id)arg1 withSessionPageId:(NSString *)arg2 withReport:(_Bool)arg3;
- (WCSessionConfigModel *)parseSessionConfigModel:(id)arg1;
- (WCSessionFlowConfigModel *)parseSessionFlowConfigModel:(id)arg1;
@end

