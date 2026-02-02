//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface EmoticonFinderDesignerCache
{
    unsigned int _designerUin;
    NSMutableArray *_storeItemList;
    NSMutableArray *_emojiInfoList;
    NSMutableArray *_ipSetList;
    unsigned long long _totalEmoticonCount;
    unsigned long long _totalEmojiCount;
    NSString *_finderUserName;
}

+ (id)getEmoticonFinderDesignerCachePathWithDesignerUin:(unsigned int)arg1;
+ (id)getEmoticonFinderDesignerRootDir;
+ (_Bool)isCahceExistForDesignerUin:(unsigned int)arg1;
+ (id)getCacheForDesignerUin:(unsigned int)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_ipSetList;
+ (void)PBArrayAdd_emojiInfoList;
+ (void)PBArrayAdd_storeItemList;
+ (void)PBArrayAdd_totalEmojiCount;
+ (void)PBArrayAdd_totalEmoticonCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(nonatomic) unsigned long long totalEmojiCount; // @synthesize totalEmojiCount=_totalEmojiCount;
@property(nonatomic) unsigned long long totalEmoticonCount; // @synthesize totalEmoticonCount=_totalEmoticonCount;
@property(retain, nonatomic) NSMutableArray *ipSetList; // @synthesize ipSetList=_ipSetList;
@property(retain, nonatomic) NSMutableArray *emojiInfoList; // @synthesize emojiInfoList=_emojiInfoList;
@property(retain, nonatomic) NSMutableArray *storeItemList; // @synthesize storeItemList=_storeItemList;
- (void)saveToFile;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

