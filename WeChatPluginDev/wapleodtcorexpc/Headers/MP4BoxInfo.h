//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MP4BoxInfo : NSObject
{
    NSString *_name;
    unsigned long long _offset;
    unsigned long long _length;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

