//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableDictionary;
@protocol BrandStyleUILogicControllerDelegate;

@interface BrandStyleUILogicController
{
    CContact *m_contact;
    id <BrandStyleUILogicControllerDelegate> m_delegate;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
- (id)getInnerToolView;
- (id)getOutterInputPresenter;
- (id)getOutterToolView;
- (id)getWholeView;
- (id)getBrandViewController;
- (id)getBrandLogicController;
- (id)getBrandContact;
- (void)removeCustomToolView;
- (void)addMsgForUsr:(id)arg1;
- (void)processLocationDidFinish;
- (void)saveAchievedImageMd5:(id)arg1;
- (void)processImageDidFinish;
- (void)processImageDidCancel;
- (_Bool)shouldSaveAchievedImageMd5;
- (_Bool)shouldHideOrginInputToolView;
- (double)getCustomizedAreaWidth;
- (void)setLastMenuMode:(_Bool)arg1;
- (_Bool)getLastMenuMode;
- (void)adjustToolViewComponent;
- (void)addSessionToTop;
- (_Bool)isNoNeedShowNormalToolView;
- (void)startReceiveMsg:(id)arg1;
- (void)updateIfCreateToolView:(id)arg1 inputPresenter:(id)arg2;
- (void)updateIfViewWillDisappear;
- (void)updateIfViewDidAppear;
- (void)updateIfViewWillAppear;
- (void)updateIfViewDidInit;
- (void)updateIfViewWillInit;
- (id)initWithContact:(id)arg1 WithDelegate:(id)arg2;

@end

