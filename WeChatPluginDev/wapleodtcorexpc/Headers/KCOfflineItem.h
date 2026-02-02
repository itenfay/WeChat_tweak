//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KCOfflineItem : NSObject
{
    NSString *_name;
    NSString *_pinyin;
    long long _size;
    long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

