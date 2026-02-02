//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DataReportObjectDataEntityStorage : NSObject
{
    NSMapTable *m_objectDataMap;
}

- (void).cxx_destruct;
- (void)clear:(id)arg1;
- (id)get:(id)arg1;
- (void)save:(id)arg1 withEntity:(id)arg2;
- (id)init;

@end

