//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LZFileConfigInfo : NSObject
{
    unsigned long long _fileSize;
    NSMutableArray *_writeRanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *writeRanges; // @synthesize writeRanges=_writeRanges;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

