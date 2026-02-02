//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDelete, WCTInsert, WCTSelect, WCTUpdate;

@protocol WCTChainCallProtocol
- (WCTUpdate *)prepareUpdate;
- (WCTSelect *)prepareSelect;
- (WCTDelete *)prepareDelete;
- (WCTInsert *)prepareInsert;
@end

