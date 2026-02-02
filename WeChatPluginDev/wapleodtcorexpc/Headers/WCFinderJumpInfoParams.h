//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo_Style, NSDictionary, NSString, WAAppTaskHandlerWrapper, WCFinderContact, WCFinderFeedContentVM, WCFinderLiteAppExtraParams, WCFinderPostSourceInfo;
@protocol MMLiveMorphDismissTarget, WCAdFinderDialogViewControllerDelegate, WCCanvasHalfScreenViewControllerDelegate, WCFinderCardWebViewControllerDelegate, WCFinderCollectionHalfScreenViewControllerDelegate;

@interface WCFinderJumpInfoParams : NSObject
{
    _Bool _ignoreCheckCardWebDelegate;
    _Bool _showPostVideoToCommentAreaSwitch;
    _Bool _miniAppShowNativeNav;
    _Bool _needHiddenTemplateNav;
    _Bool _useCustomHeight;
    _Bool _useDarkModeLoadingForWeapp;
    _Bool _shouldCheckCanvasDelegate;
    _Bool _enableBulletComment;
    _Bool _showLoadingView;
    _Bool _fakeLiveMorphTransition;
    _Bool _canDuetShootPublish;
    _Bool _forceLightMode;
    int _fromCommentScene;
    WCFinderFeedContentVM *_contentVM;
    FinderJumpInfo_Style *_style;
    id <WCFinderCardWebViewControllerDelegate> _cardWebDelegate;
    unsigned long long _pos;
    unsigned long long _streamEntranceType;
    WCFinderContact *_contact;
    NSString *_topicContent;
    WCFinderPostSourceInfo *_sourceInfo;
    NSString *_profilebypInfo;
    unsigned long long _shareScene;
    unsigned long long _miniAppScene;
    NSString *_sceneNote;
    NSString *_finderId;
    WAAppTaskHandlerWrapper *_handlerWraper;
    NSDictionary *_miniAppExtraDict;
    double _customHeight;
    WCFinderLiteAppExtraParams *_liteAppExtraParams;
    id <WCCanvasHalfScreenViewControllerDelegate> _adCanvasDelegate;
    long long _sectionIndex;
    NSString *_livingJumperAdReportInfo;
    NSString *_uxinfo;
    id <WCAdFinderDialogViewControllerDelegate> _adDialogDelegate;
    id <WCFinderCollectionHalfScreenViewControllerDelegate> _collectionDelegate;
    NSString *_entranceGMsgID;
    unsigned long long _livingIconType;
    id <MMLiveMorphDismissTarget> _liveMorphDismissTarget;
    NSString *_navigationLeftIconName;
    unsigned long long _postEnterScene;
    CDUnknownBlockType _liteAppStoreBlock;
    FinderJumpInfo_Style *_defaultStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo_Style *defaultStyle; // @synthesize defaultStyle=_defaultStyle;
@property(nonatomic) _Bool forceLightMode; // @synthesize forceLightMode=_forceLightMode;
@property(copy, nonatomic) CDUnknownBlockType liteAppStoreBlock; // @synthesize liteAppStoreBlock=_liteAppStoreBlock;
@property(nonatomic) _Bool canDuetShootPublish; // @synthesize canDuetShootPublish=_canDuetShootPublish;
@property(nonatomic) unsigned long long postEnterScene; // @synthesize postEnterScene=_postEnterScene;
@property(retain, nonatomic) NSString *navigationLeftIconName; // @synthesize navigationLeftIconName=_navigationLeftIconName;
@property(nonatomic) __weak id <MMLiveMorphDismissTarget> liveMorphDismissTarget; // @synthesize liveMorphDismissTarget=_liveMorphDismissTarget;
@property(nonatomic) _Bool fakeLiveMorphTransition; // @synthesize fakeLiveMorphTransition=_fakeLiveMorphTransition;
@property(nonatomic) unsigned long long livingIconType; // @synthesize livingIconType=_livingIconType;
@property(copy, nonatomic) NSString *entranceGMsgID; // @synthesize entranceGMsgID=_entranceGMsgID;
@property(nonatomic) __weak id <WCFinderCollectionHalfScreenViewControllerDelegate> collectionDelegate; // @synthesize collectionDelegate=_collectionDelegate;
@property(nonatomic) __weak id <WCAdFinderDialogViewControllerDelegate> adDialogDelegate; // @synthesize adDialogDelegate=_adDialogDelegate;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) _Bool showLoadingView; // @synthesize showLoadingView=_showLoadingView;
@property(nonatomic) _Bool enableBulletComment; // @synthesize enableBulletComment=_enableBulletComment;
@property(retain, nonatomic) NSString *livingJumperAdReportInfo; // @synthesize livingJumperAdReportInfo=_livingJumperAdReportInfo;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool shouldCheckCanvasDelegate; // @synthesize shouldCheckCanvasDelegate=_shouldCheckCanvasDelegate;
@property(nonatomic) __weak id <WCCanvasHalfScreenViewControllerDelegate> adCanvasDelegate; // @synthesize adCanvasDelegate=_adCanvasDelegate;
@property(retain, nonatomic) WCFinderLiteAppExtraParams *liteAppExtraParams; // @synthesize liteAppExtraParams=_liteAppExtraParams;
@property(nonatomic) _Bool useDarkModeLoadingForWeapp; // @synthesize useDarkModeLoadingForWeapp=_useDarkModeLoadingForWeapp;
@property(nonatomic) double customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) _Bool useCustomHeight; // @synthesize useCustomHeight=_useCustomHeight;
@property(nonatomic) _Bool needHiddenTemplateNav; // @synthesize needHiddenTemplateNav=_needHiddenTemplateNav;
@property(copy, nonatomic) NSDictionary *miniAppExtraDict; // @synthesize miniAppExtraDict=_miniAppExtraDict;
@property(retain, nonatomic) WAAppTaskHandlerWrapper *handlerWraper; // @synthesize handlerWraper=_handlerWraper;
@property(retain, nonatomic) NSString *finderId; // @synthesize finderId=_finderId;
@property(nonatomic) _Bool miniAppShowNativeNav; // @synthesize miniAppShowNativeNav=_miniAppShowNativeNav;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long miniAppScene; // @synthesize miniAppScene=_miniAppScene;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(copy, nonatomic) NSString *profilebypInfo; // @synthesize profilebypInfo=_profilebypInfo;
@property(nonatomic) _Bool showPostVideoToCommentAreaSwitch; // @synthesize showPostVideoToCommentAreaSwitch=_showPostVideoToCommentAreaSwitch;
@property(retain, nonatomic) WCFinderPostSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(copy, nonatomic) NSString *topicContent; // @synthesize topicContent=_topicContent;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(nonatomic) unsigned long long pos; // @synthesize pos=_pos;
@property(nonatomic) _Bool ignoreCheckCardWebDelegate; // @synthesize ignoreCheckCardWebDelegate=_ignoreCheckCardWebDelegate;
@property(nonatomic) __weak id <WCFinderCardWebViewControllerDelegate> cardWebDelegate; // @synthesize cardWebDelegate=_cardWebDelegate;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (id)initWithStyle:(id)arg1;
- (id)init;

@end

