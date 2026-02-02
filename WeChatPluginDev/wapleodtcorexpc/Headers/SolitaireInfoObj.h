//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SolitaireInfoObj : NSObject
{
    _Bool _bHasHeader;
    _Bool _bKeywordQuickCreate;
    _Bool _bContainEnKeyword;
    _Bool _isHasOccupyKeyword;
    _Bool _isDeleteExistInfo;
    _Bool _isOnNeedMsg;
    _Bool _bFromXmlInfo;
    _Bool _bFromOriginEdit;
    unsigned int _localId;
    unsigned int _createTime;
    NSString *_nsKey;
    NSString *_nsIdentifier;
    unsigned long long _msgSvrID;
    NSString *_chatName;
    NSString *_fromUserName;
    NSString *_activeUserName;
    NSString *_nsHeader;
    NSString *_nsTail;
    NSString *_nsExample;
    NSString *_nsSeparator;
    NSString *_nsContent;
    NSArray *_arrItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrItems; // @synthesize arrItems=_arrItems;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator=_nsSeparator;
@property(retain, nonatomic) NSString *nsExample; // @synthesize nsExample=_nsExample;
@property(retain, nonatomic) NSString *nsTail; // @synthesize nsTail=_nsTail;
@property(retain, nonatomic) NSString *nsHeader; // @synthesize nsHeader=_nsHeader;
@property(nonatomic) _Bool bFromOriginEdit; // @synthesize bFromOriginEdit=_bFromOriginEdit;
@property(retain, nonatomic) NSString *activeUserName; // @synthesize activeUserName=_activeUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool bFromXmlInfo; // @synthesize bFromXmlInfo=_bFromXmlInfo;
@property(nonatomic) _Bool isOnNeedMsg; // @synthesize isOnNeedMsg=_isOnNeedMsg;
@property(nonatomic) _Bool isDeleteExistInfo; // @synthesize isDeleteExistInfo=_isDeleteExistInfo;
@property(nonatomic) _Bool isHasOccupyKeyword; // @synthesize isHasOccupyKeyword=_isHasOccupyKeyword;
@property(nonatomic) _Bool bContainEnKeyword; // @synthesize bContainEnKeyword=_bContainEnKeyword;
@property(nonatomic) _Bool bKeywordQuickCreate; // @synthesize bKeywordQuickCreate=_bKeywordQuickCreate;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(retain, nonatomic) NSString *nsKey; // @synthesize nsKey=_nsKey;
@property(nonatomic) _Bool bHasHeader; // @synthesize bHasHeader=_bHasHeader;
- (id)description;
- (_Bool)isWordExceedMaxCount;
- (_Bool)isMathKeywordWithRegex:(id)arg1;
- (_Bool)isHasENKeyword;
- (_Bool)isHasCNKeyword;
- (_Bool)isHasKeyword;
- (id)getText;
- (id)createSolitaire;
- (void)fixHearInfo;
- (id)getSolitaireKey;

@end

