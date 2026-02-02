//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPPageFriendInfo, MPPagePayInfo, NSString;

@interface MPPageRelatedInfo
{
    unsigned int _lastUpdatTimeStamp;
    NSString *_originUrl;
    NSString *_title;
    NSString *_fullUrl;
    MPPageFriendInfo *_friendInfo;
    MPPagePayInfo *_payInfo;
    NSString *_pageIdentifier;
    NSString *_wordingReportInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_wordingReportInfo;
+ (void)PBArrayAdd_pageIdentifier;
+ (void)PBArrayAdd_lastUpdatTimeStamp;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_friendInfo;
+ (void)PBArrayAdd_fullUrl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *wordingReportInfo; // @synthesize wordingReportInfo=_wordingReportInfo;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(nonatomic) unsigned int lastUpdatTimeStamp; // @synthesize lastUpdatTimeStamp=_lastUpdatTimeStamp;
@property(retain, nonatomic) MPPagePayInfo *payInfo; // @synthesize payInfo=_payInfo;
@property(retain, nonatomic) MPPageFriendInfo *friendInfo; // @synthesize friendInfo=_friendInfo;
@property(copy, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

