//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdMiniShopInfo : NSObject
{
    _Bool _preloadFlag;
    unsigned int _version;
    NSString *_username;
    NSString *_path;
    NSString *_requestId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool preloadFlag; // @synthesize preloadFlag=_preloadFlag;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

