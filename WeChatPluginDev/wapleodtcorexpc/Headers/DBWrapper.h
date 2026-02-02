//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCTDatabase;

@interface DBWrapper : NSObject
{
    WCTDatabase *_db;
    NSMutableArray *_arrMsgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrMsgInfo; // @synthesize arrMsgInfo=_arrMsgInfo;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataBase:(id)arg1;

@end

