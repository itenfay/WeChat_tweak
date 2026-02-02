//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveTabListContainerInfo, FinderThemeLiveContainerInfo, NSData, NSMutableArray, NSString, WCFinderLiveTabInfo;

@interface WCFinderLiveStreamContainerModel : NSObject
{
    _Bool _enableDoubleFlowStyle;
    int _type;
    unsigned int _nextPagePullType;
    unsigned long long _containerId;
    NSString *_name;
    NSString *_iconUrl;
    NSMutableArray *_elementModelList;
    unsigned long long _continueFlag;
    NSMutableArray *_wordingColors;
    NSData *_containerLastBuffer;
    unsigned long long _countRestrict;
    WCFinderLiveTabInfo *_jumpTabInfo;
    FinderThemeLiveContainerInfo *_themeLiveContainerInfo;
    FinderLiveTabListContainerInfo *_liveTabListContainerInfo;
}

+ (id)finderLiveStreamContainerModelFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int nextPagePullType; // @synthesize nextPagePullType=_nextPagePullType;
@property(nonatomic) _Bool enableDoubleFlowStyle; // @synthesize enableDoubleFlowStyle=_enableDoubleFlowStyle;
@property(retain, nonatomic) FinderLiveTabListContainerInfo *liveTabListContainerInfo; // @synthesize liveTabListContainerInfo=_liveTabListContainerInfo;
@property(retain, nonatomic) FinderThemeLiveContainerInfo *themeLiveContainerInfo; // @synthesize themeLiveContainerInfo=_themeLiveContainerInfo;
@property(retain, nonatomic) WCFinderLiveTabInfo *jumpTabInfo; // @synthesize jumpTabInfo=_jumpTabInfo;
@property(nonatomic) unsigned long long countRestrict; // @synthesize countRestrict=_countRestrict;
@property(retain, nonatomic) NSData *containerLastBuffer; // @synthesize containerLastBuffer=_containerLastBuffer;
@property(retain, nonatomic) NSMutableArray *wordingColors; // @synthesize wordingColors=_wordingColors;
@property(nonatomic) unsigned long long continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *elementModelList; // @synthesize elementModelList=_elementModelList;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
- (id)firstJumpModel;
- (id)toFinderLiveStreamContainer;

@end

