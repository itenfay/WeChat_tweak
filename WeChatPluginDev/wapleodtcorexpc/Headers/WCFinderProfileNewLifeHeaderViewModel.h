//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderProfileNewLifeHeaderViewModel : NSObject
{
    _Bool _authorState;
    unsigned int _likeCount;
    unsigned int _globalFavoriteCount;
    unsigned int _shareCount;
    unsigned int _heartLikeCount;
    NSString *_bannerWording;
    double _bannerHeight;
    NSDictionary *_bannerReportParams;
    CDUnknownBlockType _bannerTapHandler;
    CDUnknownBlockType _bannerShowHandler;
    CDUnknownBlockType _headerRefreshHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType headerRefreshHandler; // @synthesize headerRefreshHandler=_headerRefreshHandler;
@property(copy, nonatomic) CDUnknownBlockType bannerShowHandler; // @synthesize bannerShowHandler=_bannerShowHandler;
@property(copy, nonatomic) CDUnknownBlockType bannerTapHandler; // @synthesize bannerTapHandler=_bannerTapHandler;
@property(retain, nonatomic) NSDictionary *bannerReportParams; // @synthesize bannerReportParams=_bannerReportParams;
@property(nonatomic) unsigned int heartLikeCount; // @synthesize heartLikeCount=_heartLikeCount;
@property(nonatomic) unsigned int shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) unsigned int globalFavoriteCount; // @synthesize globalFavoriteCount=_globalFavoriteCount;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic, getter=isAuthorState) _Bool authorState; // @synthesize authorState=_authorState;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) NSString *bannerWording; // @synthesize bannerWording=_bannerWording;
- (_Bool)containGadgets;
- (double)heightForWidth:(double)arg1;

@end

