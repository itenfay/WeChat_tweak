//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString;

@interface FavAppMsgShareItem
{
    _Bool _nativePage;
    _Bool _isPaySubscribe;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSString *_srcUsername;
    NSString *_srcDisplayName;
    NSString *_cover;
    NSDate *_pubTime;
    NSString *_vid;
    NSString *_coverPicImageUrl;
    long long _picCount;
    double _coverPicWidth;
    double _coverPicHeight;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double coverPicHeight; // @synthesize coverPicHeight=_coverPicHeight;
@property(nonatomic) double coverPicWidth; // @synthesize coverPicWidth=_coverPicWidth;
@property(nonatomic) long long picCount; // @synthesize picCount=_picCount;
@property(copy, nonatomic) NSString *coverPicImageUrl; // @synthesize coverPicImageUrl=_coverPicImageUrl;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *srcDisplayName; // @synthesize srcDisplayName=_srcDisplayName;
@property(copy, nonatomic) NSString *srcUsername; // @synthesize srcUsername=_srcUsername;
@property(nonatomic) _Bool nativePage; // @synthesize nativePage=_nativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)toXML;

@end

