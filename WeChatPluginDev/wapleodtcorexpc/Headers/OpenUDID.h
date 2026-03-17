//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OpenUDID : NSObject
{
}

+ (void)setOptOut:(_Bool)arg1;
+ (id)valueWithError:(id *)arg1;
+ (id)value;
+ (id)_generateFreshOpenUDID;
+ (id)_getDictFromPasteboard:(id)arg1;
+ (void)_setDict:(id)arg1 forPasteboard:(id)arg2;

@end

