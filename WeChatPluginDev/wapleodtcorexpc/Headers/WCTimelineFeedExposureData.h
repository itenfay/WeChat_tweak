//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCTimelineFeedExposureData
{
    _Bool _isAd;
    int _likeCount;
    int _commentCount;
    int _objectType;
    NSString *_feedId;
    double _feedheight;
    double _stayTimeRelative;
    double _realScreenHeight;
    double _realShowTime;
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
@property(nonatomic) double realShowTime; // @synthesize realShowTime=_realShowTime;
@property(nonatomic) double realScreenHeight; // @synthesize realScreenHeight=_realScreenHeight;
@property(nonatomic) double stayTimeRelative; // @synthesize stayTimeRelative=_stayTimeRelative;
@property(nonatomic) double feedheight; // @synthesize feedheight=_feedheight;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)toString;

@end

