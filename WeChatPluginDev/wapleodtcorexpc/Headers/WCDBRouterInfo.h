//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCDBRouterInfo : NSObject
{
    NSString *_database;
    NSArray *_associatedPaths;
    _Bool _critical;
    int _tag;
    NSString *_name;
    NSString *_curDBPath;
}

+ (id)infoWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(_Bool)arg5;
- (void).cxx_destruct;
@property _Bool critical; // @synthesize critical=_critical;
@property(retain, nonatomic) NSString *curDBPath; // @synthesize curDBPath=_curDBPath;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
- (_Bool)checkPathMatch:(id)arg1;
@property(readonly, nonatomic) NSArray *associatedPaths;
@property(readonly, nonatomic) NSString *rawPathOfDatabase;
@property(readonly, nonatomic) NSString *database;
- (id)initWithTag:(int)arg1 name:(id)arg2 database:(id)arg3 associatedPaths:(id)arg4 critical:(_Bool)arg5;

@end

