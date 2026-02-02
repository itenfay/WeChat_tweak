//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCAppMsgShareInfo : NSObject
{
    _Bool _hasItemShowType;
    _Bool _isNativePage;
    _Bool _isPaySubscribe;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSString *_digest;
    NSString *_cover;
    NSDate *_pubTime;
    NSString *_vid;
    long long _picCount;
}

+ (id)xmlTag;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_picCount;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_cover;
+ (void)PBArrayAdd_digest;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_hasItemShowType;
- (void).cxx_destruct;
@property(nonatomic) long long picCount; // @synthesize picCount=_picCount;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(nonatomic) _Bool isNativePage; // @synthesize isNativePage=_isNativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
- (_Bool)isValidBizMpBigPic;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

