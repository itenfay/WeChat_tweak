//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeVisModelTypeConfig : NSObject
{
    NSString *_key;
    long long _type;
    long long _subtype;
    NSString *_md5;
    NSString *_filepath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

