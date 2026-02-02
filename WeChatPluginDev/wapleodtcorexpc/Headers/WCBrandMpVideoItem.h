//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBrandMpVideoItem : NSObject
{
    NSString *_bizUsrName;
    NSString *_bizNickName;
    NSString *_title;
    NSString *_mpUrl;
    NSString *_videoVid;
    NSString *_videoUrl;
    double _videoDuration;
    NSString *_thumbUrl;
    double _thumbWidth;
    double _thumbHeight;
    NSString *_url;
}

+ (id)xmlTag;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_bizNickName;
+ (void)PBArrayAdd_bizUsrName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid=_videoVid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
@property(readonly, copy) NSString *description;
- (_Bool)checkData;
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

