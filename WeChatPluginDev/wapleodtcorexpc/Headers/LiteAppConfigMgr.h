//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiteAppConfigMgr : NSObject
{
}

+ (id)sharedInstance;
- (id)mergeConfigJson:(id)arg1;
- (id)mergeDictionaries:(id)arg1 dict2:(id)arg2;
- (id)getConfigModel:(id)arg1;
- (void)mergeConfig:(id)arg1;
- (id)init;

@end

