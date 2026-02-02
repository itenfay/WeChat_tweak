//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADCanvasPageBackgroundCoverInfo : NSObject
{
    int _scaleMode;
    NSString *_imageUrl;
    NSString *_color;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

