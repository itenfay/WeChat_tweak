//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderCheckThumbModel;

@interface WCFinderVideoQualityScoreModel : NSObject
{
    _Bool _hasStickers;
    double _videoScore;
    double _videoCoverScore;
    double _videoAudioScore;
    double _thumbScore;
    double _hdimgScore;
    WCFinderCheckThumbModel *_coverModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCheckThumbModel *coverModel; // @synthesize coverModel=_coverModel;
@property(nonatomic) _Bool hasStickers; // @synthesize hasStickers=_hasStickers;
@property(nonatomic) double hdimgScore; // @synthesize hdimgScore=_hdimgScore;
@property(nonatomic) double thumbScore; // @synthesize thumbScore=_thumbScore;
@property(nonatomic) double videoAudioScore; // @synthesize videoAudioScore=_videoAudioScore;
@property(nonatomic) double videoCoverScore; // @synthesize videoCoverScore=_videoCoverScore;
@property(nonatomic) double videoScore; // @synthesize videoScore=_videoScore;

@end

