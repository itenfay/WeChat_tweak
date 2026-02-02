//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderVideoTemplateInfo, NSArray, NSMutableArray, NSString, RecommendedMusicInfo;

@interface WCShortVideoToolBarInitParams : NSObject
{
    _Bool _canRelayoutSubviews;
    _Bool _needMaasEffect;
    unsigned long long _cameraMode;
    unsigned long long _scene;
    RecommendedMusicInfo *_patMusicInfo;
    unsigned long long _uiStyle;
    NSString *_shortURLForPreviewingTemplate;
    FinderVideoTemplateInfo *_templateInfo;
    unsigned long long _finderEventId;
    NSArray *_toolbarBtnOrder;
    NSString *_finderUsername;
    NSMutableArray *_wxToMaasMusicIds;
    double _contentBottomPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double contentBottomPadding; // @synthesize contentBottomPadding=_contentBottomPadding;
@property(retain, nonatomic) NSMutableArray *wxToMaasMusicIds; // @synthesize wxToMaasMusicIds=_wxToMaasMusicIds;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSArray *toolbarBtnOrder; // @synthesize toolbarBtnOrder=_toolbarBtnOrder;
@property(nonatomic) unsigned long long finderEventId; // @synthesize finderEventId=_finderEventId;
@property(retain, nonatomic) FinderVideoTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) NSString *shortURLForPreviewingTemplate; // @synthesize shortURLForPreviewingTemplate=_shortURLForPreviewingTemplate;
@property(nonatomic) _Bool needMaasEffect; // @synthesize needMaasEffect=_needMaasEffect;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(nonatomic) _Bool canRelayoutSubviews; // @synthesize canRelayoutSubviews=_canRelayoutSubviews;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;

@end

