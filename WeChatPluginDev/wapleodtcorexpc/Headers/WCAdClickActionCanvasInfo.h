//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdClickActionCanvasInfo : NSObject
{
    int _canvasPreloadType;
    NSString *_canvasId;
    NSString *_canvasDynamicInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int canvasPreloadType; // @synthesize canvasPreloadType=_canvasPreloadType;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

