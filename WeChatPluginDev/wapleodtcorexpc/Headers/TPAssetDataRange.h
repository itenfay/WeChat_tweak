//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPAssetDataRange : NSObject
{
    long long _offset;
    long long _length;
}

@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (long long)max;

@end

