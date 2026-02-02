//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCAdBreakFramePlayStateItem : NSObject
{
    NSArray *_tagInfoList;
    double _sectionBegin;
    double _sectionEnd;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double sectionEnd; // @synthesize sectionEnd=_sectionEnd;
@property(nonatomic) double sectionBegin; // @synthesize sectionBegin=_sectionBegin;
@property(retain, nonatomic) NSArray *tagInfoList; // @synthesize tagInfoList=_tagInfoList;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

