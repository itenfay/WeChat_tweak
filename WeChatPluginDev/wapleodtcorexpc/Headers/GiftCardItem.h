//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GiftCardItem
{
    unsigned int _bizUin;
    unsigned int _ver;
    NSString *_orderId;
    NSString *_appName;
    NSString *_recvDigest;
    NSString *_sendDigest;
    NSString *_backgroundPicUrl;
    NSString *_titleColorStr;
    NSString *_descColorStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_orderId;
+ (void)PBArrayAdd_bizUin;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ver; // @synthesize ver=_ver;
@property(retain, nonatomic) NSString *descColorStr; // @synthesize descColorStr=_descColorStr;
@property(retain, nonatomic) NSString *titleColorStr; // @synthesize titleColorStr=_titleColorStr;
@property(retain, nonatomic) NSString *backgroundPicUrl; // @synthesize backgroundPicUrl=_backgroundPicUrl;
@property(retain, nonatomic) NSString *sendDigest; // @synthesize sendDigest=_sendDigest;
@property(retain, nonatomic) NSString *recvDigest; // @synthesize recvDigest=_recvDigest;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

