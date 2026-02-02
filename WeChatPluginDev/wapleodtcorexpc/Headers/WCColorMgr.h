//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, NSMutableDictionary, NSString;

@interface WCColorMgr : NSObject
{
    NSString *m_colorName;
    MMLRUCache *m_cache;
    struct os_unfair_lock_s m_lock;
    NSMutableDictionary *_colorDic;
    NSString *_currentType;
}

+ (void)setUseSpecialConfig:(_Bool)arg1;
+ (_Bool)isUsingSpecialConfig;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSMutableDictionary *colorDic; // @synthesize colorDic=_colorDic;
- (id)hexStringToColor:(id)arg1;
- (id)hexStringToColorFromCache:(id)arg1;
- (id)getColor:(id)arg1;
- (_Bool)isWCColorWithName:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)getColorValueForName:(id)arg1;
- (_Bool)loadColorFromXMLByPath:(id)arg1;
- (void)loadNormalColorFromXML;
- (void)loadSpecialColorFromXML;
- (void)loadColorFromXML;
- (id)colorNames;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

