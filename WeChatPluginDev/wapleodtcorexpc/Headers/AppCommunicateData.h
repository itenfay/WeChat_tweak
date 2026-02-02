//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface AppCommunicateData : NSObject
{
    unsigned long long _command;
    NSMutableDictionary *_dictionaryData;
    NSData *_fileData;
    NSArray *_fileDatas;
    _Bool _returnFromApp;
    _Bool _isAutoResend;
    int _result;
    int _scene;
    NSString *_conversationAccount;
    NSString *_openID;
    NSString *_sdkVer;
    NSString *_lang;
    NSString *_country;
    NSString *_toUserOpenID;
    NSString *_universalLink;
    NSDictionary *_weixinKeyboardInfo;
    unsigned long long _dictionaryDataLen;
    unsigned long long _originTextLen;
    NSString *_reportAppID;
    NSString *_reportCurrentUrl;
    NSString *_reportApiName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportApiName; // @synthesize reportApiName=_reportApiName;
@property(copy, nonatomic) NSString *reportCurrentUrl; // @synthesize reportCurrentUrl=_reportCurrentUrl;
@property(copy, nonatomic) NSString *reportAppID; // @synthesize reportAppID=_reportAppID;
@property(nonatomic) unsigned long long originTextLen; // @synthesize originTextLen=_originTextLen;
@property(nonatomic) unsigned long long dictionaryDataLen; // @synthesize dictionaryDataLen=_dictionaryDataLen;
@property(retain, nonatomic) NSDictionary *weixinKeyboardInfo; // @synthesize weixinKeyboardInfo=_weixinKeyboardInfo;
@property(nonatomic) _Bool isAutoResend; // @synthesize isAutoResend=_isAutoResend;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *toUserOpenID; // @synthesize toUserOpenID=_toUserOpenID;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *sdkVer; // @synthesize sdkVer=_sdkVer;
@property(copy, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool returnFromApp; // @synthesize returnFromApp=_returnFromApp;
@property(retain, nonatomic) NSString *conversationAccount; // @synthesize conversationAccount=_conversationAccount;
@property(copy, nonatomic) NSArray *fileDatas; // @synthesize fileDatas=_fileDatas;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (id)transferToString;
@property(readonly, nonatomic) unsigned long long appDataLength;
- (_Bool)RespToData:(id)arg1;
- (_Bool)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;
- (_Bool)ReqToData:(id)arg1;
- (_Bool)MakeMediaInternalMessage:(id)arg1;
- (_Bool)isSuportWeishiVideo;
- (id)mediaInternalMessage:(id *)arg1;
- (id)mediaInternalMessage;
- (id)sceneMessage;
- (_Bool)MakeMediaMessage:(id)arg1;
- (_Bool)MakeLinkObject:(id)arg1;
- (_Bool)MakeSceneDataObject:(id)arg1 withText:(id)arg2;
- (_Bool)makeStateSceneObject:(id)arg1;
- (id)mediaMessage;
- (_Bool)shouldShareWXMusicObjectAsH5;
- (long long)getMaxVideoDataLength;
- (long long)getMaxFileDataLength;
- (id)messageExtDic;
- (id)weAppExtDic;
- (_Bool)MakeTextMessageInState:(id)arg1;
- (_Bool)MakeTextMessage:(id)arg1;
- (id)textMessage;
- (_Bool)isTextMessage;
- (_Bool)MakeAuthResp:(id)arg1;
- (_Bool)MakeAuthRequest:(id)arg1;
- (id)authRequest;
- (_Bool)MakeCommand:(unsigned long long)arg1;
- (void)initCommonField:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)command;
- (id)propertList;
- (id)initWithPropertList:(id)arg1;
- (id)init;

@end

