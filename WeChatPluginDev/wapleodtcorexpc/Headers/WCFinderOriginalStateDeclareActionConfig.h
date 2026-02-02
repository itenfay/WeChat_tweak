//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderOriginalStateDeclareActionConfig : NSObject
{
    unsigned long long _type;
    NSString *_exportId;
    NSString *_nonceId;
    NSString *_username;
    unsigned long long _mediaType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;

@end

