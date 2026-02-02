//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMFinderLiveNewCustomGiftComponent
{
    unsigned int _seq;
    NSString *_componentName;
    NSArray *_componentValueList;
    NSString *_selectComponentKey;
    NSString *_key;
    unsigned long long _uiStyle;
    NSString *_currentSelectComponentKey;
    CDUnknownBlockType _currSelectComponentKeyChangeCallback;
}

+ (_Bool)isComponentPBValid:(id)arg1 business:(id)arg2;
+ (id)transferFromComponentPB:(id)arg1 business:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType currSelectComponentKeyChangeCallback; // @synthesize currSelectComponentKeyChangeCallback=_currSelectComponentKeyChangeCallback;
@property(retain, nonatomic) NSString *currentSelectComponentKey; // @synthesize currentSelectComponentKey=_currentSelectComponentKey;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *selectComponentKey; // @synthesize selectComponentKey=_selectComponentKey;
@property(retain, nonatomic) NSArray *componentValueList; // @synthesize componentValueList=_componentValueList;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
- (id)getFirstComponentValueSupportCustomText;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)recoverCurrentSelectFromCustomizationConfig;
- (_Bool)synchronizeCurrentSelectToCustomizationConfig;
- (_Bool)isCurrentSelectEqualToCustomizationConfig;
- (id)getCurrentSelectComponentValue;
- (_Bool)updateCurrentSelectComponentKey:(id)arg1;
- (id)styleName;

@end

