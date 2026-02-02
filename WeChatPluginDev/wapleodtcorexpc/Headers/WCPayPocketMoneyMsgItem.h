//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayPocketMoneyMsgItem
{
    _Bool _ishalfscreen;
    _Bool _transparent;
    NSString *_appid;
    NSString *_apppath;
    NSString *_appquery;
    double _heightpercent;
    NSString *_minversion;
    NSString *_animin;
    NSString *_animout;
    NSString *_extradata;
    NSString *_senderdigest;
    NSString *_receiverdigest;
    NSString *_sourceicon;
    NSString *_paymsgid;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *paymsgid; // @synthesize paymsgid=_paymsgid;
@property(copy, nonatomic) NSString *sourceicon; // @synthesize sourceicon=_sourceicon;
@property(copy, nonatomic) NSString *receiverdigest; // @synthesize receiverdigest=_receiverdigest;
@property(copy, nonatomic) NSString *senderdigest; // @synthesize senderdigest=_senderdigest;
@property(copy, nonatomic) NSString *extradata; // @synthesize extradata=_extradata;
@property(copy, nonatomic) NSString *animout; // @synthesize animout=_animout;
@property(copy, nonatomic) NSString *animin; // @synthesize animin=_animin;
@property(copy, nonatomic) NSString *minversion; // @synthesize minversion=_minversion;
@property(nonatomic) double heightpercent; // @synthesize heightpercent=_heightpercent;
@property(nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(nonatomic) _Bool ishalfscreen; // @synthesize ishalfscreen=_ishalfscreen;
@property(copy, nonatomic) NSString *appquery; // @synthesize appquery=_appquery;
@property(copy, nonatomic) NSString *apppath; // @synthesize apppath=_apppath;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)toXML;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

