//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol NSObject, WCListDiffable;

@protocol WCListDiffable
- (_Bool)isEqualToDiffableObject:(id <WCListDiffable>)arg1;
- (id <NSObject>)diffIdentifier;
@end

