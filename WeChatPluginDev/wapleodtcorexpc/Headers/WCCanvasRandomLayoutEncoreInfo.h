//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasRandomLayoutEncoreInfo
{
    int _encoreType;
    NSString *_title;
    NSString *_imageUrl;
    double _triggerGForce;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double triggerGForce; // @synthesize triggerGForce=_triggerGForce;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int encoreType; // @synthesize encoreType=_encoreType;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

