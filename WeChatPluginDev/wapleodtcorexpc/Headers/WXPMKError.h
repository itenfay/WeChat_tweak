//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError;

@interface WXPMKError : NSObject
{
    NSError *error;
    _Bool consumed;
}

+ (void)unconsume:(id)arg1;
+ (void)consume:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end

