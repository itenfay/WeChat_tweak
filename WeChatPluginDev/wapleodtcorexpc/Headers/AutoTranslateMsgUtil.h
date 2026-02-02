//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AutoTranslateMsgUtil : NSObject
{
}

+ (void)closeAutoTranslate:(id)arg1;
+ (unsigned int)getAutoTranslateLocalId:(id)arg1;
+ (void)resetAutoTranslate:(id)arg1 fromLocalId:(unsigned int)arg2;
+ (void)openAutoTranslate:(id)arg1 fromLocalId:(unsigned int)arg2;
+ (_Bool)isAutoTranslateEnable:(id)arg1;
+ (_Bool)canShowAutoTranslateEntry:(id)arg1;
+ (_Bool)isAutoTranslateEntryExpose:(id)arg1;
+ (void)setAutoTranslateEntryExpose:(id)arg1;
+ (void)resetAutoTranslateCount:(id)arg1;
+ (_Bool)isAutoTranslateTriggerPoint:(id)arg1;
+ (void)increaseAutoTranslateCount:(id)arg1;

@end

