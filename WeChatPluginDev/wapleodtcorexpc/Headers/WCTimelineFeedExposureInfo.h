//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCTimelineFeedExposureInfo
{
    _Bool _isAd;
    int _likeCount;
    int _commentCount;
    int _objectType;
    NSString *_feedId;
    double _exposurePosiY;
    double _exposureHeight;
    double _originPosiY;
    double _originHeight;
    double _realScreenHeight;
    NSString *_username;
    unsigned long long _locationIndex;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long locationIndex; // @synthesize locationIndex=_locationIndex;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) double realScreenHeight; // @synthesize realScreenHeight=_realScreenHeight;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) double originPosiY; // @synthesize originPosiY=_originPosiY;
@property(nonatomic) double exposureHeight; // @synthesize exposureHeight=_exposureHeight;
@property(nonatomic) double exposurePosiY; // @synthesize exposurePosiY=_exposurePosiY;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (double)getScreenExposurePercent;
- (double)getSelfExposurePercent;
- (id)toString;

@end

