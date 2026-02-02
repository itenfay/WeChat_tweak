//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdColorInfo : NSObject
{
    NSString *_color;
    NSString *_colorDark;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *colorDark; // @synthesize colorDark=_colorDark;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
- (id)uiColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

