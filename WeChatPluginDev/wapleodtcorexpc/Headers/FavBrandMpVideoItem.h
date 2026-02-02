//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavBrandMpVideoItem
{
    NSString *_bizUsrName;
    NSString *_bizNickName;
    NSString *_mpUrl;
    NSString *_vid;
    NSString *_videoUrl;
    double _duration;
    NSString *_thumbUrl;
    double _thumbWidth;
    double _thumbHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl=_mpUrl;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
- (id)description;
- (_Bool)checkData;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;

@end

