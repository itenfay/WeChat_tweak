//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UINavigationController, UIViewController, WCFinderPOIParamsModel;

@interface WCFinderPOIRelatedStreamOpenParams : NSObject
{
    _Bool _disableHoldHalfScreen;
    _Bool _useHalfScreen;
    _Bool _canForward;
    int _commentScene;
    unsigned int _poiSrcType;
    UINavigationController *_navVC;
    UIViewController *_fromVC;
    NSString *_groupBuyBypassData;
    WCFinderPOIParamsModel *_poiParamsModel;
    unsigned long long _entryScene;
    unsigned long long _cardType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) unsigned int poiSrcType; // @synthesize poiSrcType=_poiSrcType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel; // @synthesize poiParamsModel=_poiParamsModel;
@property(copy, nonatomic) NSString *groupBuyBypassData; // @synthesize groupBuyBypassData=_groupBuyBypassData;
@property(nonatomic) _Bool canForward; // @synthesize canForward=_canForward;
@property(nonatomic) _Bool useHalfScreen; // @synthesize useHalfScreen=_useHalfScreen;
@property(nonatomic) _Bool disableHoldHalfScreen; // @synthesize disableHoldHalfScreen=_disableHoldHalfScreen;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
- (id)initWithPoiParamsModel:(id)arg1 commentScene:(int)arg2 poiSrcType:(unsigned int)arg3 entryScene:(unsigned long long)arg4 cardType:(unsigned long long)arg5 navVC:(id)arg6;

@end

