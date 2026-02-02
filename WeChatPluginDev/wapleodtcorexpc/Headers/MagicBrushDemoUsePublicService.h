//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MagicBrushDemoUsePublicService : NSObject
{
}

- (void)onMainScriptInjected:(id)arg1;
- (id)getFileDataByPath:(id)arg1;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;

@end
