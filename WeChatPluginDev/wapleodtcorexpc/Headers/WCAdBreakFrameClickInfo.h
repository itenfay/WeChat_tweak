//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdCardBtnInfo;

@interface WCAdBreakFrameClickInfo : NSObject
{
    double _areaLeft;
    double _areaTop;
    double _areaWidth;
    double _areaHeight;
    double _clickStartTime;
    double _clickEndTime;
    WCAdCardBtnInfo *_clickActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(nonatomic) double clickEndTime; // @synthesize clickEndTime=_clickEndTime;
@property(nonatomic) double clickStartTime; // @synthesize clickStartTime=_clickStartTime;
@property(nonatomic) double areaHeight; // @synthesize areaHeight=_areaHeight;
@property(nonatomic) double areaWidth; // @synthesize areaWidth=_areaWidth;
@property(nonatomic) double areaTop; // @synthesize areaTop=_areaTop;
@property(nonatomic) double areaLeft; // @synthesize areaLeft=_areaLeft;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

