//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface MJLocationPickerUtils : NSObject
{
}

+ (void)clear;
+ (void)presentLocationPickerFrom:(id)arg1 didFinishPick:(CDUnknownBlockType)arg2 didCancel:(CDUnknownBlockType)arg3;
+ (void)setHandler:(id)arg1;
+ (id)handler;

@end
