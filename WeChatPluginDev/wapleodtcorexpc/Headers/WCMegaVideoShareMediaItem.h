//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMegaVideoShareMediaItem : NSObject
{
    NSString *_url;
    NSString *_thumbUrl;
    NSString *_width;
    NSString *_height;
    NSString *_coverUrl;
    NSString *_videoPlayDuration;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoPlayDuration; // @synthesize videoPlayDuration=_videoPlayDuration;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

