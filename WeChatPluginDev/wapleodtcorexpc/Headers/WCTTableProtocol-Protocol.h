//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTTable;

@protocol WCTTableProtocol
- (_Bool)dropIndex:(NSString *)arg1;
- (_Bool)dropTable:(NSString *)arg1;
- (_Bool)createVirtualTable:(NSString *)arg1 withClass:(Class)arg2;
- (_Bool)createTable:(NSString *)arg1 withClass:(Class)arg2;
- (WCTTable *)getTable:(NSString *)arg1 withClass:(Class)arg2;
- (struct WCTOptionalBool)tableExists:(NSString *)arg1;
@end

