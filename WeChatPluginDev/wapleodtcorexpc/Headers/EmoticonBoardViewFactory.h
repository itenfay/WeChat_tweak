//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonBoardViewFactory : NSObject
{
}

+ (id)getConfigWithAllTabItemDisabled;
+ (void)checkIsCustomEmoticonAddEntryEnabledWithType:(unsigned long long)arg1 For:(id)arg2;
+ (void)checkIsCameraEmoticonAddEntryEnabledWithType:(unsigned long long)arg1 For:(id)arg2;
+ (void)checkIsCameraEntranceEnabledFor:(id)arg1;
+ (void)setupTabConfig:(id)arg1 WithType:(unsigned long long)arg2;
+ (void)setupViewMiscOptionsForConfig:(id)arg1 WithType:(unsigned long long)arg2 andFactoryHelper:(id)arg3;
+ (id)getViewConfigWithType:(unsigned long long)arg1 andFactoryHelper:(id)arg2;

@end

