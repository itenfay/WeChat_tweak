//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol WCTValueProtocol;

@protocol WCTColumnCoding
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(NSObject<WCTValueProtocol> *)arg1;
- (NSObject<WCTValueProtocol> *)archivedWCTValue;
@end

