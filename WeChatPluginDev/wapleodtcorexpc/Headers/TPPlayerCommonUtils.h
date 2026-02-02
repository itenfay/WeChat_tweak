//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TPPlayerCommonUtils : NSObject
{
    NSMutableDictionary *_businessIDNames;
    NSDictionary *_seekTypeNames;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)makeSeekTypeName:(long long)arg1;
- (id)makeBusinessIDName:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

