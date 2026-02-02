//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckAuthorityRequestStruct : NSObject
{
    NSString *appId;
    NSString *nonceStr;
    NSString *timestamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInURL;
    long long m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
    int _JsApiSource;
    unsigned int _payChannel;
    NSString *_weAppUsername;
    NSString *_weAppPath;
    NSString *_commandWord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commandWord; // @synthesize commandWord=_commandWord;
@property(nonatomic) unsigned int payChannel; // @synthesize payChannel=_payChannel;
@property(nonatomic) int JsApiSource; // @synthesize JsApiSource=_JsApiSource;
@property(retain, nonatomic) NSString *weAppPath; // @synthesize weAppPath=_weAppPath;
@property(retain, nonatomic) NSString *weAppUsername; // @synthesize weAppUsername=_weAppUsername;
@property(nonatomic) int m_enWCPayCheckOpenWCPayViewAuthorityScene; // @synthesize m_enWCPayCheckOpenWCPayViewAuthorityScene;
@property(nonatomic) long long m_enWCPayCheckAuthorityScene; // @synthesize m_enWCPayCheckAuthorityScene;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;

@end

