//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMsgMenuReporter : NSObject
{
    _Bool _hasClicked;
    _Bool _isSender;
    int _scene;
    int _contentType;
    int _sourceType;
    unsigned int _msgCreateTime;
    unsigned int _payInfoStatus;
    NSString *_chatName;
    unsigned long long _enterMenuTime;
    long long _messageType;
    long long _subMsgType;
    long long _messageSvrId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int payInfoStatus; // @synthesize payInfoStatus=_payInfoStatus;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long messageSvrId; // @synthesize messageSvrId=_messageSvrId;
@property(nonatomic) long long subMsgType; // @synthesize subMsgType=_subMsgType;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool hasClicked; // @synthesize hasClicked=_hasClicked;
@property(nonatomic) unsigned long long enterMenuTime; // @synthesize enterMenuTime=_enterMenuTime;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void)reportWithMenuType:(long long)arg1 buttonLoc:(long long)arg2 locationSeq:(long long)arg3;
- (void)onMenuItemSelected:(id)arg1 index:(long long)arg2;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerDidShow;
- (void)setMenuSourceType:(int)arg1;
- (void)setSelectContentType:(int)arg1;
- (void)setCurrentMsgWrap:(id)arg1;
- (void)deactive;
- (void)active;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

