//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebJsLibFileInfo
{
    unsigned int _offset;
    unsigned int _size;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

@end

