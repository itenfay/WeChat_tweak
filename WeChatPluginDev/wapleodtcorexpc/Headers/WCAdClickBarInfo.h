//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdClickBarInfo : NSObject
{
    NSString *_desc;
    long long _animShowTime;
    long long _animHideTime;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long animHideTime; // @synthesize animHideTime=_animHideTime;
@property(nonatomic) long long animShowTime; // @synthesize animShowTime=_animShowTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;

@end

