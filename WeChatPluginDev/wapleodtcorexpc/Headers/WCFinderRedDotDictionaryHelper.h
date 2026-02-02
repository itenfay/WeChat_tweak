//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCFinderRedDotThreadSafeDictionary;

@interface WCFinderRedDotDictionaryHelper : NSObject
{
    _Bool _useGCDSwitch;
    WCFinderRedDotThreadSafeDictionary *_gcdDic;
    NSMutableDictionary *_dic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) WCFinderRedDotThreadSafeDictionary *gcdDic; // @synthesize gcdDic=_gcdDic;
@property(nonatomic) _Bool useGCDSwitch; // @synthesize useGCDSwitch=_useGCDSwitch;
- (id)containerAllValues;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)containerCount;
- (id)containerMutableCopy;
- (id)containerObjectForKey:(id)arg1;
- (void)containerRemoveObjectsForKeys:(id)arg1;
- (void)containerRemoveObjectForKey:(id)arg1;
- (void)containerSetObject:(id)arg1 forKey:(id)arg2;
- (void)containerReset;
- (id)currentDic;
- (id)initWithGCDSwitch:(_Bool)arg1 queueName:(id)arg2;

@end

