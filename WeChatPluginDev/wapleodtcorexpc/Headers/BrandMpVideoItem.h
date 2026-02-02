//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandMpVideoItem : NSObject
{
    _Bool _bUseExternalVideoPath;
    _Bool _bNoNeedRequestNewUrl;
    _Bool _forbidForward;
    unsigned int _subscene;
    NSString *_mpUrl;
    NSString *_videoVid;
    NSString *_videoUrl;
    double _videoDuration;
    double _thumbWidth;
    double _thumbHeight;
    NSString *_videoUrlNew;
}

+ (void)initialize;
+ (void)PBArrayAdd_forbidForward;
+ (void)PBArrayAdd_videoUrlNew;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_bUseExternalVideoPath;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_mpUrl;
- (void).cxx_destruct;
@property(nonatomic) _Bool forbidForward; // @synthesize forbidForward=_forbidForward;
@property(copy, nonatomic) NSString *videoUrlNew; // @synthesize videoUrlNew=_videoUrlNew;
@property(nonatomic) unsigned int subscene; // @synthesize subscene=_subscene;
@property(nonatomic) _Bool bNoNeedRequestNewUrl; // @synthesize bNoNeedRequestNewUrl=_bNoNeedRequestNewUrl;
@property(nonatomic) _Bool bUseExternalVideoPath; // @synthesize bUseExternalVideoPath=_bUseExternalVideoPath;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid=_videoVid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(readonly, copy) NSString *description;
- (_Bool)checkData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

