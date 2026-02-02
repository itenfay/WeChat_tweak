//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdSchemaDoubleLinkInfo : NSObject
{
    int _doubleLinkWeAppType;
    NSString *_doubleLinkH5Url;
    NSString *_doubleLinkWeAppUsername;
    NSString *_doubleLinkWeAppPath;
    WCAdCardBtnInfo *_doubleLinkClickActionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *doubleLinkClickActionInfo; // @synthesize doubleLinkClickActionInfo=_doubleLinkClickActionInfo;
@property(nonatomic) int doubleLinkWeAppType; // @synthesize doubleLinkWeAppType=_doubleLinkWeAppType;
@property(retain, nonatomic) NSString *doubleLinkWeAppPath; // @synthesize doubleLinkWeAppPath=_doubleLinkWeAppPath;
@property(retain, nonatomic) NSString *doubleLinkWeAppUsername; // @synthesize doubleLinkWeAppUsername=_doubleLinkWeAppUsername;
@property(retain, nonatomic) NSString *doubleLinkH5Url; // @synthesize doubleLinkH5Url=_doubleLinkH5Url;
- (id)description;
- (_Bool)isValid;
- (_Bool)isWeAppInfoValid;
- (_Bool)isH5InfoValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

