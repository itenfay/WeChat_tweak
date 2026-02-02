//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMDiskExptConfig : NSObject
{
    NSMutableDictionary *_configDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
- (int)getStoreTimeFromExpt:(id)arg1;
- (id)getCacheKeyFromFullPath:(id)arg1;
- (void)loadAllExptConfig;
- (id)init;

@end

