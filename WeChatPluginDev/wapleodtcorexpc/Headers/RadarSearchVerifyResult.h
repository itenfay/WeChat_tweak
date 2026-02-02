//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RadarSearchVerifyResult : NSObject
{
    NSString *_username;
    NSString *_content;
    NSString *_encryUsrName;
    int _type;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryUsrName; // @synthesize encryUsrName=_encryUsrName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)dealloc;

@end

