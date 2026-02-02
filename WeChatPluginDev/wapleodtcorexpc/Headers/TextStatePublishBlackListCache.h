//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TextStatePublishBlackListCache : NSObject
{
}

+ (id)keyForType:(long long)arg1 textStateId:(id)arg2;
+ (id)getItemForType:(long long)arg1 textStateId:(id)arg2;
+ (void)removeItemForType:(long long)arg1 textStateId:(id)arg2;
+ (void)setItem:(id)arg1 forType:(long long)arg2;

@end

