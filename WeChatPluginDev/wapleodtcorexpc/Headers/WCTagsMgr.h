//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCTagsMgr : NSObject
{
    NSMutableDictionary *_tagsMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tagsMap; // @synthesize tagsMap=_tagsMap;
- (id)tagItemByType:(long long)arg1;
- (void)registerTagItems:(id)arg1;
- (id)init;

@end

