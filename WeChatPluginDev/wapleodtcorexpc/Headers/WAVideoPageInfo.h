//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAVideoPageInfo
{
    _Bool _isFromOpenSDK;
    NSString *_videoSource;
    NSString *_appThumbUrl;
    struct CGSize _thumbImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromOpenSDK; // @synthesize isFromOpenSDK=_isFromOpenSDK;
@property(copy, nonatomic) NSString *appThumbUrl; // @synthesize appThumbUrl=_appThumbUrl;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=_thumbImageSize;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

