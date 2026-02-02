//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSDictionary, NSString;

@interface BrandProfileEnterInfo : NSObject
{
    _Bool _isFromFinder;
    _Bool _scrollToTab;
    unsigned int _enterScene;
    unsigned int _userType;
    unsigned int _qrCodeScene;
    unsigned int _sessionType;
    unsigned int _productId;
    int _scanSubScene;
    unsigned int _finderSubScene;
    int _bizFromScene;
    unsigned int _openArticleFromScene;
    NSString *_sendUser;
    NSString *_chatUser;
    NSString *_firstUrl;
    NSString *_lastUrl;
    NSString *_searchKeyword;
    CMessageWrap *_sourceMessage;
    unsigned long long _brandTLRecCardId;
    NSString *_channelSessionId;
    NSString *_sceneNote;
    NSString *_finderBuffer;
    NSString *_finderExtraData;
    unsigned long long _tabType;
    NSDictionary *_brandFinderJumpInfoDic;
    NSString *_luckMoneySpringEventUrl;
    unsigned long long _pageMode;
    NSDictionary *_dictRawEnterInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dictRawEnterInfo; // @synthesize dictRawEnterInfo=_dictRawEnterInfo;
@property(nonatomic) unsigned int openArticleFromScene; // @synthesize openArticleFromScene=_openArticleFromScene;
@property(nonatomic) int bizFromScene; // @synthesize bizFromScene=_bizFromScene;
@property(nonatomic) _Bool scrollToTab; // @synthesize scrollToTab=_scrollToTab;
@property(nonatomic) unsigned long long pageMode; // @synthesize pageMode=_pageMode;
@property(copy, nonatomic) NSString *luckMoneySpringEventUrl; // @synthesize luckMoneySpringEventUrl=_luckMoneySpringEventUrl;
@property(nonatomic) _Bool isFromFinder; // @synthesize isFromFinder=_isFromFinder;
@property(nonatomic) unsigned int finderSubScene; // @synthesize finderSubScene=_finderSubScene;
@property(copy, nonatomic) NSDictionary *brandFinderJumpInfoDic; // @synthesize brandFinderJumpInfoDic=_brandFinderJumpInfoDic;
@property(nonatomic) int scanSubScene; // @synthesize scanSubScene=_scanSubScene;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *finderExtraData; // @synthesize finderExtraData=_finderExtraData;
@property(copy, nonatomic) NSString *finderBuffer; // @synthesize finderBuffer=_finderBuffer;
@property(nonatomic) unsigned int productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(copy, nonatomic) NSString *channelSessionId; // @synthesize channelSessionId=_channelSessionId;
@property(nonatomic) unsigned long long brandTLRecCardId; // @synthesize brandTLRecCardId=_brandTLRecCardId;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) CMessageWrap *sourceMessage; // @synthesize sourceMessage=_sourceMessage;
@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(copy, nonatomic) NSString *lastUrl; // @synthesize lastUrl=_lastUrl;
@property(copy, nonatomic) NSString *firstUrl; // @synthesize firstUrl=_firstUrl;
@property(copy, nonatomic) NSString *chatUser; // @synthesize chatUser=_chatUser;
@property(copy, nonatomic) NSString *sendUser; // @synthesize sendUser=_sendUser;
@property(nonatomic) unsigned int qrCodeScene; // @synthesize qrCodeScene=_qrCodeScene;
@property(nonatomic) unsigned int userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (void)updateChatUserType;
- (void)updateInfoFromWAHTMLWebViewController:(id)arg1;
- (void)updateInfoFromWebViewController:(id)arg1;
- (void)updateInfoFromCardMessage:(id)arg1;
- (id)init;

@end

