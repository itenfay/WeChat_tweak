//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface FlutterEngineGroupOptions : NSObject
{
    NSString *_entrypoint;
    NSString *_libraryURI;
    NSString *_initialRoute;
    NSArray *_entrypointArgs;
    NSNumber *_sharedIsolateMode;
}

@property(copy, nonatomic) NSNumber *sharedIsolateMode; // @synthesize sharedIsolateMode=_sharedIsolateMode;
@property(retain, nonatomic) NSArray *entrypointArgs; // @synthesize entrypointArgs=_entrypointArgs;
@property(copy, nonatomic) NSString *initialRoute; // @synthesize initialRoute=_initialRoute;
@property(copy, nonatomic) NSString *libraryURI; // @synthesize libraryURI=_libraryURI;
@property(copy, nonatomic) NSString *entrypoint; // @synthesize entrypoint=_entrypoint;
- (void)dealloc;

@end

