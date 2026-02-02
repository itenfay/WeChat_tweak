//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface PLzmaSDKOutMultiStream
{
}

- (id)initWithPartSize:(unsigned int)arg1;
- (id)initWithDirectoryPath:(id)arg1 partName:(id)arg2 partExtension:(id)arg3 format:(unsigned char)arg4 andPartSize:(unsigned int)arg5;
@property(readonly, nonatomic) NSArray *streams;
- (_Bool)isMulti;

@end

