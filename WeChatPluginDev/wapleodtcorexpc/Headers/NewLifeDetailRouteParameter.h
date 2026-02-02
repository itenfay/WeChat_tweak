//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, NewLifeDetailReportInfo, NewLifeDetailThumbInfo, NewLifeTransitionManager, WCFinderDataItem;

@interface NewLifeDetailRouteParameter : NSObject
{
    _Bool _dataItemComplete;
    _Bool _enableAuthor;
    _Bool _needRecommendStream;
    _Bool _showSkipHome;
    _Bool _disableEdgeSlide;
    _Bool _isPreview;
    int _enterScene;
    WCFinderDataItem *_dataItem;
    NewLifeTransitionManager *_transitionManager;
    unsigned long long _entryScene;
    NSData *_lastBuffer;
    NewLifeDetailReportInfo *_reportInfo;
    NewLifeDetailThumbInfo *_detailThumbInfo;
    NSString *_authorUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *authorUsername; // @synthesize authorUsername=_authorUsername;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) NewLifeDetailThumbInfo *detailThumbInfo; // @synthesize detailThumbInfo=_detailThumbInfo;
@property(retain, nonatomic) NewLifeDetailReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool disableEdgeSlide; // @synthesize disableEdgeSlide=_disableEdgeSlide;
@property(nonatomic, getter=isShowSkipHome) _Bool showSkipHome; // @synthesize showSkipHome=_showSkipHome;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool needRecommendStream; // @synthesize needRecommendStream=_needRecommendStream;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) _Bool enableAuthor; // @synthesize enableAuthor=_enableAuthor;
@property(retain, nonatomic) NewLifeTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(nonatomic, getter=isDataItemComplete) _Bool dataItemComplete; // @synthesize dataItemComplete=_dataItemComplete;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)description;
- (_Bool)isDetailAvailable;
- (_Bool)isAuthor;
- (_Bool)isValid;
- (id)init;

@end

