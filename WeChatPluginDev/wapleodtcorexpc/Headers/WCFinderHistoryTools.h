//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderHistoryTools : NSObject
{
}

+ (void)showCloseConfirmOnView:(id)arg1 hasContent:(_Bool)arg2 doClose:(CDUnknownBlockType)arg3 onCancel:(CDUnknownBlockType)arg4;
+ (void)_startOpLog:(int)arg1 tids:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)deleteHistory:(id)arg1 vc:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)clearHistory:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)openHistory:(CDUnknownBlockType)arg1;

@end

