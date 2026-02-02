//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WAJSContextPlugin_TenpaySecure : NSObject
{
    _Bool _pathCreated;
}

@property(nonatomic) _Bool pathCreated; // @synthesize pathCreated=_pathCreated;
- (id)tenpaySecureRootDir;
- (void)runInTenpayThread:(CDUnknownBlockType)arg1;
- (void)tryInit;

@end
