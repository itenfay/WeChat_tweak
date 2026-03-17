//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSThread;

@interface WAEJFontCache : NSObject
{
    NSMutableDictionary *fonts;
    NSMutableDictionary *gfxFonts;
    NSThread *thread;
}

- (id)outlineFontWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3;
- (id)fontWithDescriptor:(id)arg1 contentScale:(float)arg2;
- (id)outlineFontWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3 isWgfxMode:(_Bool)arg4;
- (id)fontWithDescriptor:(id)arg1 contentScale:(float)arg2 isWgfxMode:(_Bool)arg3;
- (void)doClearFonts;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

