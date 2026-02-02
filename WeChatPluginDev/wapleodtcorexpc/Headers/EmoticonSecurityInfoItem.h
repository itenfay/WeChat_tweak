//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonSecurityInfoItem : NSObject
{
    NSString *_query;
    NSString *_md5;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;

@end

