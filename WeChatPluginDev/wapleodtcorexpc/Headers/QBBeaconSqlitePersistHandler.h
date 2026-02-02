//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconSqlitePersistHandler : NSObject
{
    _Bool isGetfilesuccess;
}

+ (id)getDefaultHandler;
@property(nonatomic) _Bool isGetfilesuccess; // @synthesize isGetfilesuccess;
- (id)getObject:(id)arg1;
- (_Bool)deleteObjectWithKey:(id)arg1;
- (_Bool)saveObject:(id)arg1 key:(id)arg2;
- (_Bool)deleteObjects;
- (_Bool)saveObjects:(id)arg1 key:(id)arg2;
- (id)init;

@end

