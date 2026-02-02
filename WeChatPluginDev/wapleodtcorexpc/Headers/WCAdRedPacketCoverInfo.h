//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdRedPacketCoverInfo : NSObject
{
    NSString *_scene;
    NSString *_receiveUri;
    NSString *_extInfo;
    NSString *_coverUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *receiveUri; // @synthesize receiveUri=_receiveUri;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isValid;

@end

