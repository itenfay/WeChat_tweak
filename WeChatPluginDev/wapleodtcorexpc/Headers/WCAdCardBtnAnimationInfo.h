//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdCardBtnAnimationInfo : NSObject
{
    unsigned long long _animTime;
    unsigned long long _animDelayTime;
    NSString *_btnColor;
    NSString *_btnBgColor;
    NSString *_btnDarkColor;
    NSString *_btnBgDarkColor;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *btnBgDarkColor; // @synthesize btnBgDarkColor=_btnBgDarkColor;
@property(retain, nonatomic) NSString *btnDarkColor; // @synthesize btnDarkColor=_btnDarkColor;
@property(retain, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(retain, nonatomic) NSString *btnColor; // @synthesize btnColor=_btnColor;
@property(nonatomic) unsigned long long animDelayTime; // @synthesize animDelayTime=_animDelayTime;
@property(nonatomic) unsigned long long animTime; // @synthesize animTime=_animTime;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

