//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSString;

@interface CVerifyContactWrap : NSObject
{
    NSString *m_nsUsrName;
    NSString *m_nsOriginalUsrName;
    unsigned int m_uiScene;
    NSString *m_nsTicket;
    unsigned int m_uiWCFlag;
    CContact *m_oVerifyContact;
    _Bool _hasReportData;
    unsigned int _subScene;
    unsigned int _mpScene;
    unsigned int _addContactSubScene;
    unsigned int _productId;
    NSString *m_nsSourceUserName;
    NSString *m_nsSourceNickName;
    CContact *_m_oVerifyChatContact;
    NSString *_m_nsChatRoomUserName;
    NSString *_outerUrl;
    NSString *_m_reportInfo;
    NSString *_sceneNote;
    NSString *_finderBuffer;
    NSString *_verifyContent;
    NSString *_ctx;
    NSString *_searchClickId;
    NSArray *_labelIdList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *labelIdList; // @synthesize labelIdList=_labelIdList;
@property(retain, nonatomic) NSString *searchClickId; // @synthesize searchClickId=_searchClickId;
@property(retain, nonatomic) NSString *ctx; // @synthesize ctx=_ctx;
@property(retain, nonatomic) NSString *verifyContent; // @synthesize verifyContent=_verifyContent;
@property(copy, nonatomic) NSString *finderBuffer; // @synthesize finderBuffer=_finderBuffer;
@property(nonatomic) unsigned int productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned int addContactSubScene; // @synthesize addContactSubScene=_addContactSubScene;
@property(nonatomic) _Bool hasReportData; // @synthesize hasReportData=_hasReportData;
@property(nonatomic) unsigned int mpScene; // @synthesize mpScene=_mpScene;
@property(copy, nonatomic) NSString *m_reportInfo; // @synthesize m_reportInfo=_m_reportInfo;
@property(retain, nonatomic) NSString *outerUrl; // @synthesize outerUrl=_outerUrl;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(retain, nonatomic) NSString *m_nsChatRoomUserName; // @synthesize m_nsChatRoomUserName=_m_nsChatRoomUserName;
@property(retain, nonatomic) CContact *m_oVerifyChatContact; // @synthesize m_oVerifyChatContact=_m_oVerifyChatContact;
@property(retain, nonatomic) NSString *m_nsSourceNickName; // @synthesize m_nsSourceNickName;
@property(retain, nonatomic) NSString *m_nsSourceUserName; // @synthesize m_nsSourceUserName;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact;
@property(nonatomic) unsigned int m_uiWCFlag; // @synthesize m_uiWCFlag;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) NSString *m_nsOriginalUsrName; // @synthesize m_nsOriginalUsrName;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (id)getRealUserName;
- (id)init;

@end

