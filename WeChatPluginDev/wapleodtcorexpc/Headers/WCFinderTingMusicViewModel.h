//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMusicTopicInfo, ForwardMessageLogicController, MMListenCategoryItem, NSArray, NSMutableArray, NSString, WCFinderMusicTopicDataProvider;
@protocol WCFinderTingMusicViewModelDelegate;

@interface WCFinderTingMusicViewModel : NSObject
{
    _Bool _singerSignatureExpand;
    id <WCFinderTingMusicViewModelDelegate> _delegate;
    double _menuExpTime;
    WCFinderMusicTopicDataProvider *_dataProvider;
    FinderMusicTopicInfo *_musicTopicInfo;
    MMListenCategoryItem *_listenCategoryItem;
    NSArray *_singerInfoArray;
    NSArray *_tabInfoArray;
    ForwardMessageLogicController *_forwardLogic;
    NSMutableArray *_listenItemArray;
    NSMutableArray *_sectionArray;
}

+ (int)getRelatedInnerType;
+ (int)getMusicVideoInnerType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(retain, nonatomic) NSMutableArray *listenItemArray; // @synthesize listenItemArray=_listenItemArray;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool singerSignatureExpand; // @synthesize singerSignatureExpand=_singerSignatureExpand;
@property(retain, nonatomic) NSArray *tabInfoArray; // @synthesize tabInfoArray=_tabInfoArray;
@property(retain, nonatomic) NSArray *singerInfoArray; // @synthesize singerInfoArray=_singerInfoArray;
@property(retain, nonatomic) MMListenCategoryItem *listenCategoryItem; // @synthesize listenCategoryItem=_listenCategoryItem;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(nonatomic) __weak id <WCFinderTingMusicViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)refObjectId;
- (void)updateLikeState:(_Bool)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onMusicDataProviderFetchSuc:(int)arg1;
- (unsigned long long)sectionTypeBySection:(long long)arg1;
- (void)addSectionToArray:(unsigned long long)arg1;
- (long long)getMusicianListCount;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)enableShowMusicianIntro;
- (id)getRelatedVideoDetailListViewMode;
- (id)getRelatedVideoContentVMArray;
- (id)getMusicVideoDetailListViewMode;
- (id)getMusicVideoContentVMArray;
- (id)getMusicListenItemAtIndex:(long long)arg1;
- (void)getContactWithNickname:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (_Bool)hasFinderSingerInfo;
- (_Bool)shouldShowMusicianListAllBtn;
- (_Bool)isLastListenItem:(long long)arg1;
- (id)getListenItemArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (id)getCurrentViewController;
- (_Bool)svrDataAvailable;
- (id)createMusicianWorksListPromiseByFinderUsername:(id)arg1;
- (_Bool)containTargetInnerType:(int)arg1;
- (void)fetchTabVideosInfoByInnerTabArray:(id)arg1 singerContact:(id)arg2;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (id)defaultTabInfoArray;
- (void)updateTabInfoArray;
- (void)requestMusicTopicInfoList;
- (unsigned long long)musicTopicId;
- (id)initWithMusicTopicId:(unsigned long long)arg1 encryptedMusicId:(id)arg2 byPassInfo:(id)arg3 commentScene:(int)arg4 refObjectid:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

