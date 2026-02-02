//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdDynamicCanvasDSLPreloadItem : NSObject
{
    NSString *_url;
    NSString *_md5;
    long long _type;
    long long _size;
    NSString *_materialId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

