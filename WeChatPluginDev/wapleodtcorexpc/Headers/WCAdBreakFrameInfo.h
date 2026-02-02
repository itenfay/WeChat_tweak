//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdBreakFrameAlphaVideoInfo, WCAdBreakFrameClickInfo;

@interface WCAdBreakFrameInfo : NSObject
{
    int _mediaType;
    WCAdBreakFrameAlphaVideoInfo *_alphaVideoInfo;
    WCAdBreakFrameClickInfo *_clickInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBreakFrameClickInfo *clickInfo; // @synthesize clickInfo=_clickInfo;
@property(retain, nonatomic) WCAdBreakFrameAlphaVideoInfo *alphaVideoInfo; // @synthesize alphaVideoInfo=_alphaVideoInfo;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

