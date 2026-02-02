//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface FTSMsgItem : NSObject
{
    _Bool _isInvalid;
    unsigned int _localId;
    unsigned int _createTime;
    NSString *_userName;
    NSString *_ftsContent;
    CMessageWrap *_msgWrap;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *ftsContent; // @synthesize ftsContent=_ftsContent;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (long long)compareMsgItemAscending:(id)arg1;

@end

