//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCardLayoutStorage;
@protocol WCCardLayoutMgrDelegate;

@interface WCCardLayoutMgr
{
    WCCardLayoutStorage *_layoutStg;
    unsigned int _waitLocationTime;
    id <WCCardLayoutMgrDelegate> _delegate;
    _Bool _bGettingLayout;
}

- (void).cxx_destruct;
- (void)logHomePageList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveLayoutStg;
- (id)GetPathOfWCCardLayoutStorage;
- (void)getCardLayoutByCGI:(id)arg1 Scene:(unsigned int)arg2;
- (unsigned int)getHomePageCardNum;
- (id)getMyCardPackageSvrRetEntryList;
- (id)getCardsPkgElementList;
- (id)getEntrySubTitle;
- (_Bool)isGettingLayout;
- (id)layoutTip;
- (_Bool)hasLayoutRedDot;
- (void)clearLayoutRedDot;
- (unsigned int)getTopScene;
- (id)getFirstList;
- (id)getLabelList;
- (id)getRecentList;
- (id)getNearByList;
- (id)getMemberCardList;
- (id)getExpiringList;
- (id)getLayoutBuff;
- (void)loadLayoutStg;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

