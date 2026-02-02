//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderMsgSessionAliasEntranceCellViewModel, WCFinderTopBannerCellViewModel, WCTableSessionStorage;
@protocol WCFinderMsgSessionCellDataSourceDelegate;

@interface WCFinderMsgSessionCellDataSource : NSObject
{
    _Bool _isGreetMsgSessionList;
    _Bool _hasAliasInfo;
    _Bool _ownerInvalid;
    unsigned int _myAccountType;
    WCFinderMsgSessionAliasEntranceCellViewModel *m_aliasEntranceCellViewModel;
    id <WCFinderMsgSessionCellDataSourceDelegate> _delegate;
    NSString *_finderUsername;
    WCFinderTopBannerCellViewModel *_topBannerCellViewModel;
    WCTableSessionStorage *_sessionStorage;
    NSMutableDictionary *_sessionId2ViewModelDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ownerInvalid; // @synthesize ownerInvalid=_ownerInvalid;
@property(retain, nonatomic) NSMutableDictionary *sessionId2ViewModelDic; // @synthesize sessionId2ViewModelDic=_sessionId2ViewModelDic;
@property(retain, nonatomic) WCTableSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) WCFinderTopBannerCellViewModel *topBannerCellViewModel; // @synthesize topBannerCellViewModel=_topBannerCellViewModel;
@property(nonatomic) _Bool hasAliasInfo; // @synthesize hasAliasInfo=_hasAliasInfo;
@property(nonatomic) _Bool isGreetMsgSessionList; // @synthesize isGreetMsgSessionList=_isGreetMsgSessionList;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) __weak id <WCFinderMsgSessionCellDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMsgSessionAliasEntranceCellViewModel *aliasEntranceCellViewModel; // @synthesize aliasEntranceCellViewModel=m_aliasEntranceCellViewModel;
- (void)onFinderMsgSessionUpdated;
- (void)onFinderMsgAliasSessionOwnerChanged;
- (void)openChatWithViewModel:(id)arg1 fromNav:(id)arg2 chatContentReporter:(id)arg3;
- (void)openGreetMsgSessionViewControllerFromNav:(id)arg1;
- (id)sessionCellViewModelAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (long long)sessionCount;
@property(readonly, nonatomic) _Bool showAliasSessionCell;
- (id)initWithSessionStorage:(id)arg1;
- (id)description;

@end

