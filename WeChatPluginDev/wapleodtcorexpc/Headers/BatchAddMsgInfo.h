//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface BatchAddMsgInfo : NSObject
{
    _Bool _isCanAddDB;
    _Bool _isInsertNew;
    _Bool _addDBResult;
    _Bool _isNotify;
    _Bool _isNeedChangeDisplay;
    unsigned int _uiDes;
    CMessageWrap *_wrapMsg;
    NSString *_chatName;
    unsigned long long _addMsgType;
    NSString *_clusterType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedChangeDisplay; // @synthesize isNeedChangeDisplay=_isNeedChangeDisplay;
@property(nonatomic) _Bool isNotify; // @synthesize isNotify=_isNotify;
@property(nonatomic) _Bool addDBResult; // @synthesize addDBResult=_addDBResult;
@property(nonatomic) _Bool isInsertNew; // @synthesize isInsertNew=_isInsertNew;
@property(retain, nonatomic) NSString *clusterType; // @synthesize clusterType=_clusterType;
@property(nonatomic) unsigned long long addMsgType; // @synthesize addMsgType=_addMsgType;
@property(nonatomic) _Bool isCanAddDB; // @synthesize isCanAddDB=_isCanAddDB;
@property(nonatomic) unsigned int uiDes; // @synthesize uiDes=_uiDes;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg=_wrapMsg;
- (id)realChatName;

@end

