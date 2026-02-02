//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderLiveTabInfo : NSObject
{
    _Bool _prefechThisTab;
    _Bool _prefechNextTab;
    _Bool _prefechPreTab;
    _Bool _playVoice;
    unsigned int _tabId;
    unsigned int _tabScene;
    NSString *_tabName;
    NSMutableArray *_subTabList;
    unsigned long long _objectId;
    NSString *_iconUrl;
    NSString *_iconWording;
    NSString *_liveSquareIconUrl;
    NSMutableArray *_liveSquareWordingColor;
}

+ (id)finderLiveTabInfoFrom:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_liveSquareWordingColor;
+ (void)PBArrayAdd_liveSquareIconUrl;
+ (void)PBArrayAdd_iconWording;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_tabScene;
+ (void)PBArrayAdd_subTabList;
+ (void)PBArrayAdd_playVoice;
+ (void)PBArrayAdd_prefechPreTab;
+ (void)PBArrayAdd_prefechNextTab;
+ (void)PBArrayAdd_prefechThisTab;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_tabId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *liveSquareWordingColor; // @synthesize liveSquareWordingColor=_liveSquareWordingColor;
@property(retain, nonatomic) NSString *liveSquareIconUrl; // @synthesize liveSquareIconUrl=_liveSquareIconUrl;
@property(retain, nonatomic) NSString *iconWording; // @synthesize iconWording=_iconWording;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned int tabScene; // @synthesize tabScene=_tabScene;
@property(retain, nonatomic) NSMutableArray *subTabList; // @synthesize subTabList=_subTabList;
@property(nonatomic) _Bool playVoice; // @synthesize playVoice=_playVoice;
@property(nonatomic) _Bool prefechPreTab; // @synthesize prefechPreTab=_prefechPreTab;
@property(nonatomic) _Bool prefechNextTab; // @synthesize prefechNextTab=_prefechNextTab;
@property(nonatomic) _Bool prefechThisTab; // @synthesize prefechThisTab=_prefechThisTab;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned int tabId; // @synthesize tabId=_tabId;
- (_Bool)isEqual:(id)arg1;
- (id)genFinderLiveTabInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTabId:(unsigned long long)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

