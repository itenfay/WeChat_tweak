//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AppMsgShareItem : NSObject
{
    _Bool _hasItemShowType;
    _Bool _isNativePage;
    _Bool _isPaySubscribe;
    _Bool _showSourceInfo;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSDate *_pubTime;
    NSString *_vid;
    NSString *_coverPicImageUrl;
    long long _picCount;
    double _coverPicWidth;
    double _coverPicHeight;
}

+ (void)initialize;
+ (void)PBArrayAdd_coverPicHeight;
+ (void)PBArrayAdd_coverPicWidth;
+ (void)PBArrayAdd_picCount;
+ (void)PBArrayAdd_coverPicImageUrl;
+ (void)PBArrayAdd_showSourceInfo;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_hasItemShowType;
- (void).cxx_destruct;
@property(nonatomic) double coverPicHeight; // @synthesize coverPicHeight=_coverPicHeight;
@property(nonatomic) double coverPicWidth; // @synthesize coverPicWidth=_coverPicWidth;
@property(nonatomic) long long picCount; // @synthesize picCount=_picCount;
@property(copy, nonatomic) NSString *coverPicImageUrl; // @synthesize coverPicImageUrl=_coverPicImageUrl;
@property(nonatomic) _Bool showSourceInfo; // @synthesize showSourceInfo=_showSourceInfo;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) _Bool isNativePage; // @synthesize isNativePage=_isNativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

