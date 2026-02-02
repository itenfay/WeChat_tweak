//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStreamVideoInfo : NSObject
{
    unsigned int _uiStreamVideoTime;
    NSString *_streamVideoUrl;
    NSString *_streamVideoTitle;
    NSString *_streamVideoWording;
    NSString *_streamVideoWebUrl;
    NSString *_streamVideoThumbUrl;
    NSString *_streamVideoPublishId;
    NSString *_streamVideoAdUxInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_streamVideoAdUxInfo;
+ (void)PBArrayAdd_streamVideoPublishId;
+ (void)PBArrayAdd_streamVideoThumbUrl;
+ (void)PBArrayAdd_uiStreamVideoTime;
+ (void)PBArrayAdd_streamVideoWebUrl;
+ (void)PBArrayAdd_streamVideoWording;
+ (void)PBArrayAdd_streamVideoTitle;
+ (void)PBArrayAdd_streamVideoUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @synthesize streamVideoAdUxInfo=_streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @synthesize streamVideoPublishId=_streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @synthesize streamVideoThumbUrl=_streamVideoThumbUrl;
@property(nonatomic) unsigned int uiStreamVideoTime; // @synthesize uiStreamVideoTime=_uiStreamVideoTime;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @synthesize streamVideoWebUrl=_streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @synthesize streamVideoWording=_streamVideoWording;
@property(retain, nonatomic) NSString *streamVideoTitle; // @synthesize streamVideoTitle=_streamVideoTitle;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
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

