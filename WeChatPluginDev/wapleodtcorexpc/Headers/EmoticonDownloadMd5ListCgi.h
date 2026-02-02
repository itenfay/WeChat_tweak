//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSDictionary, NSMutableArray, NSMutableSet, NSString, OrderedDictionary;
@protocol EmoticonDownloadMd5ListCgiDelegate;

@interface EmoticonDownloadMd5ListCgi
{
    _Bool _isActive;
    _Bool _m_hasStartRequestOnce;
    id <EmoticonDownloadMd5ListCgiDelegate> _delegate;
    unsigned long long _m_type;
    NSString *_logPrefix;
    NSData *_reqBuff;
    NSDictionary *_validEmojiInfoObjDic;
    NSMutableArray *_md5List;
    NSMutableSet *_needUpateMd5Set;
    OrderedDictionary *_md5ObjectOrderedList;
    NSString *_versionKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *versionKey; // @synthesize versionKey=_versionKey;
@property(retain, nonatomic) OrderedDictionary *md5ObjectOrderedList; // @synthesize md5ObjectOrderedList=_md5ObjectOrderedList;
@property(retain, nonatomic) NSMutableSet *needUpateMd5Set; // @synthesize needUpateMd5Set=_needUpateMd5Set;
@property(retain, nonatomic) NSMutableArray *md5List; // @synthesize md5List=_md5List;
@property(retain, nonatomic) NSDictionary *validEmojiInfoObjDic; // @synthesize validEmojiInfoObjDic=_validEmojiInfoObjDic;
@property(retain, nonatomic) NSData *reqBuff; // @synthesize reqBuff=_reqBuff;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce=_m_hasStartRequestOnce;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <EmoticonDownloadMd5ListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (id)convertMd5List:(id)arg1;
- (void)callOkDelegate;
- (void)restartDownloadAllMd5;
- (void)callFailedDelegate;
- (void)requestAllEmojiInfoList;
- (void)continueRequestMd5List;
- (void)startRequest;
- (id)initWithType:(unsigned long long)arg1 reqBuff:(id)arg2 validEmojiInfoObjDic:(id)arg3;

@end

