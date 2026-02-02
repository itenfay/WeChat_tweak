//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, WAApptaskPublicResLogic;

@interface _TtC6WeChat24MagicWeAppCardPkgManager : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *pubResLogic;
}

- (void).cxx_destruct;
- (id)init;
- (id)getFileDataByPath:(id)arg1;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (void)batchEvaluateScript:(id)arg1 inContext:(id)arg2 contextInfoMap:(id)arg3;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
@property(nonatomic, retain) WAApptaskPublicResLogic *pubResLogic; // @synthesize pubResLogic;
- (id)provideFileSystem;

@end

