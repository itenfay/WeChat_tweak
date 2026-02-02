//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ImageFetchInfo : NSObject
{
    NSString *_name;
    NSString *_urlString;
    NSString *_md5;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 urlString:(id)arg2 md5:(id)arg3;

@end

