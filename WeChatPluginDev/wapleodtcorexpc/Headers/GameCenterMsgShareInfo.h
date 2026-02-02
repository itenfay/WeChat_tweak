//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgShareInfo : NSObject
{
    _Bool _shouldScale;
    int _type;
    int _thumbWidth;
    int _thumbHeight;
    NSString *_title;
    NSString *_content;
    NSString *_desc;
    NSString *_mediaUrl;
    NSString *_thumbUrl;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldScale; // @synthesize shouldScale=_shouldScale;
@property(nonatomic) int thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) int thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;

@end

