//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCVideoFlowInfo : NSObject
{
    _Bool _isMiniVideo;
    unsigned int _category;
    unsigned int _playCount;
    unsigned int _realShareCategory;
    NSString *_vid;
    NSString *_expand;
    NSString *_searchId;
    NSString *_openId;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_shareImgUrl;
    NSString *_source;
    NSString *_sourceImgUrl;
    NSString *_sourceUrl;
    NSString *_strPlayCount;
    NSString *_titleUrl;
    NSString *_nsTagInfoJSON;
    NSString *_videoChannelTitle;
    NSString *_bizUserName;
    long long _sourceJumpType;
    NSMutableArray *_extParams;
    NSData *_extParamsNSCodingData;
}

+ (void)initialize;
+ (void)PBArrayAdd_realShareCategory;
+ (void)PBArrayAdd_isMiniVideo;
+ (void)PBArrayAdd_nsTagInfoJSON;
+ (void)PBArrayAdd_extParamsNSCodingData;
+ (void)PBArrayAdd_titleUrl;
+ (void)PBArrayAdd_playCount;
+ (void)PBArrayAdd_strPlayCount;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_sourceImgUrl;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_shareImgUrl;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_searchId;
+ (void)PBArrayAdd_expand;
+ (void)PBArrayAdd_vid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *extParamsNSCodingData; // @synthesize extParamsNSCodingData=_extParamsNSCodingData;
@property(retain, nonatomic) NSMutableArray *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) long long sourceJumpType; // @synthesize sourceJumpType=_sourceJumpType;
@property(retain, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(retain, nonatomic) NSString *videoChannelTitle; // @synthesize videoChannelTitle=_videoChannelTitle;
@property(nonatomic) unsigned int realShareCategory; // @synthesize realShareCategory=_realShareCategory;
@property(nonatomic) _Bool isMiniVideo; // @synthesize isMiniVideo=_isMiniVideo;
@property(retain, nonatomic) NSString *nsTagInfoJSON; // @synthesize nsTagInfoJSON=_nsTagInfoJSON;
@property(retain, nonatomic) NSString *titleUrl; // @synthesize titleUrl=_titleUrl;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString *strPlayCount; // @synthesize strPlayCount=_strPlayCount;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *sourceImgUrl; // @synthesize sourceImgUrl=_sourceImgUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
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

