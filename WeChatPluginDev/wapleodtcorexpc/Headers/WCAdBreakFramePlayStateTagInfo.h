//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdBreakFramePlayStateTagInfo : NSObject
{
    NSString *_tagIcon;
    NSString *_tagText;
    double _animationDuration;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSString *tagIcon; // @synthesize tagIcon=_tagIcon;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

