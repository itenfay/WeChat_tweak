//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WCFinderScrollActionSheetItem
{
    CDUnknownBlockType _selection;
    unsigned long long _itemType;
    NSMutableDictionary *_finderUserInfoDict;
    long long _sectionType;
    CDUnknownBlockType _reportSetter;
}

+ (id)playBackInfoKey;
+ (id)baseKey;
+ (id)itemForFlag:(unsigned long long)arg1 withContentVM:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reportSetter; // @synthesize reportSetter=_reportSetter;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSMutableDictionary *finderUserInfoDict; // @synthesize finderUserInfoDict=_finderUserInfoDict;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) CDUnknownBlockType selection; // @synthesize selection=_selection;
- (id)description;
- (void)clearPlayBackInfo;
- (void)setPlayBackInfo:(id)arg1;
- (id)playBackInfo;
- (id)sdkParamsDict;
- (id)sdkViewId;
- (id)udfDict;
- (id)reportEid;

@end

