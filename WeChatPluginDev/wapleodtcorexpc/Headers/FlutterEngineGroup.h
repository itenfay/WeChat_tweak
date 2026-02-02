//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterDartProject, FlutterEngine, NSMutableArray, NSString;

@interface FlutterEngineGroup : NSObject
{
    int _enginesCreatedCount;
    FlutterEngine *_rootEngine;
    _Bool _sharedIsolateMode;
    NSString *_name;
    NSMutableArray *_engines;
    FlutterDartProject *_project;
}

@property(nonatomic) _Bool sharedIsolateMode; // @synthesize sharedIsolateMode=_sharedIsolateMode;
@property(retain, nonatomic) FlutterDartProject *project; // @synthesize project=_project;
@property(retain, nonatomic) NSMutableArray *engines; // @synthesize engines=_engines;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)onEngineWillBeDealloced:(id)arg1;
- (id)makeEngine;
- (id)makeEngineWithOptions:(id)arg1;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 project:(id)arg2 sharedIsolateMode:(_Bool)arg3;
- (id)initWithName:(id)arg1 project:(id)arg2;

@end

