//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdSliderCardSlideJumpInfo : NSObject
{
    NSString *_title;
    NSString *_jumpTitle;
    WCAdCardBtnInfo *_jumpActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *jumpActionInfo; // @synthesize jumpActionInfo=_jumpActionInfo;
@property(retain, nonatomic) NSString *jumpTitle; // @synthesize jumpTitle=_jumpTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

