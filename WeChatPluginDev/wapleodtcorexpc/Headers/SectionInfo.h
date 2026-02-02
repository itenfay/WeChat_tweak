//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SectionInfo
{
    long long _start;
    long long _size;
    NSString *_title;
}

+ (id)create:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long start; // @synthesize start=_start;

@end

