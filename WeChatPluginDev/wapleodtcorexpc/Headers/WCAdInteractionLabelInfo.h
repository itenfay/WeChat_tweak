//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdInteractionLabelInfo : NSObject
{
    long long _interactionType;
    NSString *_title;
    NSString *_themeColor;
    double _themeColorAlpha;
    NSArray *_rollingLabels;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rollingLabels; // @synthesize rollingLabels=_rollingLabels;
@property(nonatomic) double themeColorAlpha; // @synthesize themeColorAlpha=_themeColorAlpha;
@property(retain, nonatomic) NSString *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

